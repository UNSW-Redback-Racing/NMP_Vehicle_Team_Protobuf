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
    std::cout << "  -s serialized random data" << std::endl;
}

int main(int argc, char **argv)
{
    std::string fileName;

    std::random_device rd;
    std::default_random_engine generator(rd());
    std::uniform_int_distribution<int32_t> rng(-1000, 1000);
    auto start = std::chrono::system_clock::now();
    FileWriter writer;
    switch (getopt(argc, argv, "sd:h"))
    {
    case 's':
        while (true)
        {
            float elapsed_seconds = std::chrono::duration<float>(std::chrono::system_clock::now() - start).count();
            float value = rng(generator) * 0.5;
            SamplePtr s(new Sample(5, value, elapsed_seconds));
            writer.process(std::move(s));
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
        break;
    case 'd':
        fileName = optarg;
        writer.deserialize(fileName);
        break;
    case 'h':
        printUsage();
        break;

    default:
        printUsage();
        return EXIT_FAILURE;
    }

    return 0;
}