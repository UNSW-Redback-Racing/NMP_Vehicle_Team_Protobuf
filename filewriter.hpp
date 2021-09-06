#include <sample.hpp>

class FileWriter
{

public:
    /**
     * @param sample, the sample data that needs to be serialized
     * @return dont need to worry about free memory as it is wrapped within a smart pointer
     * */
    void process(const SamplePtr sample);
    /**
     * @param filename, the name of the binary file that you will need to desearlise
     * @return void, just print out the contents of the file in a human readable JSON format
     * */
    void deserialize(const std::string &fileName);
};