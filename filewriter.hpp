#include <sample.hpp>
#include <data.pb.h>
#include <string>
#include <fstream>
#include <signal.h>
#include <cstdlib>
#include <sys/stat.h>


using namespace std;
class FileWriter
{

public:
    FileWriter() {};
    FileWriter(std::string file_name);
    /**
     * @param sample, the sample data that needs to be serialized
     * @return dont need to worry about free memory as it is wrapped within a smart pointer
     * */
    void process(const SamplePtr sample/*, carData new_lap, std::ofstream &fileName*/);
    /**
     * @param filename, the name of the binary file that you will need to desearlise
     * @return void, just print out the contents of the file in a human readable JSON format
     * */
    void deserialize(const string fileName, DataList& deserializeList);
    // /static void intHandler(int);
private:
    std::ofstream myfile;
    //Print out the selected number of items from the given object.
    void print_list(const DataList deserializedList); 
    
};

