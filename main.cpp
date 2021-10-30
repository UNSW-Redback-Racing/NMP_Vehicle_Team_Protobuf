#include <iostream>
#include <sample.hpp>
#include <filewriter.hpp>
#include <random>
#include <chrono>
#include <ctime>
#include <getopt.h>
#include <thread>

void printUsage()
{
    std::cout << "Usage ./main [OPTIONS]" << std::endl;
    std::cout << "Options:" << std::endl;
    std::cout << "  -h Print usage" << std::endl;
    std::cout << "  -d <path> path to serialized file" << std::endl;
    std::cout << "  -s <path> serialize random data to file in path" << std::endl;
}
//static volatile sig_atomic_t keep_running = 1;
static volatile sig_atomic_t keep_running = 1;
static void intHandler(int) {
    keep_running = 0;
}

int main(int argc, char **argv)
{
    std::string fileName;
    std::random_device rd;
    std::default_random_engine generator(rd());
    std::uniform_int_distribution<int32_t> rng(-1000, 1000);
    auto start = std::chrono::system_clock::now();
    switch (getopt(argc, argv, "s:d:h"))
    {
    case 's':
    {
        FileWriter writer(optarg);
        cout << "Press Ctrl-C to stop serializing the data." << endl;
        //step up the signal handler to stop looping with Ctrl-C
        struct sigaction act;
        act.sa_handler = intHandler;
        sigaction(SIGINT, &act, NULL);
        
        while (keep_running)
        {
            float elapsed_seconds = std::chrono::duration<float>(std::chrono::system_clock::now() - start).count();
            float value = rng(generator) * 0.5;
            SamplePtr s(new Sample(5, value, elapsed_seconds));
            writer.process(std::move(s));
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
        break;
    }
    case 'd':
    {
        FileWriter writer;
        DataList data_list;
        fileName = optarg;
        writer.deserialize(fileName, data_list);
        break;
    }
    case 'h':
        printUsage();
        break;

    default:
        printUsage();
        return EXIT_FAILURE;
    }

    return 0;
}