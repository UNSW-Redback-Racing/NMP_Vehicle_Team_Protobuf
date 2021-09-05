#include <filewriter.hpp>

void FileWriter::process(SamplePtr sample)
{
    // ADD YOUR CODE HERE
    std::cout << sample->getTime() << std::endl;
    std::cout << sample->getValue() << std::endl;
}

void FileWriter::deserialize(std::string fileName)
{
    // ADD YOUR CODE HERE
    std::cout << fileName << std::endl;
}