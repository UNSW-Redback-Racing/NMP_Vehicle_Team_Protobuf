#include <filewriter.hpp>
#include <string>
#include <fstream>
using namespace std;

void FileWriter::process(const SamplePtr sample/*, std::ofstream &fileName*/)
{
    static DataList data_list;
    if (data_list.lap_size() % 25 == 0) {
        data_list.SerializeToOstream(&myfile);
        data_list.clear_lap();
    }
    carData* new_lap = data_list.add_lap();
    new_lap->set_channel(sample->getChannel());
    new_lap->set_time(sample->getTime());
    new_lap->set_value(sample->getValue());
}

void FileWriter::deserialize(const std::string fileName, DataList& deserializeList )
{
    string path = "../storage/" + fileName;
    ifstream myfile(path, ios::in | ios::binary);
    //Raise error if the given file doesn't exist.
    if (myfile.fail()) {
        perror("The given file does not exist.\n");
        return;
    }
    deserializeList.ParseFromIstream(&myfile);
    cout << deserializeList.lap_size() << " items were deserialized from "<< fileName << '.' <<endl;
    print_list(deserializeList);
}

void FileWriter::print_list(const DataList deserializedList) {
    int size = 0;
    cout << "Number of items to print out: ";
    cin >> size;
    //If the user ask for more items than the maximum, set size to the maximum number of labs.
    if (size > deserializedList.lap_size()) size = deserializedList.lap_size();
    for (int i = 0; i < size; i++) {
        const carData& temp = deserializedList.lap(i);
        cout << "Channel: " << temp.channel() << endl;
        cout << "Value: " << temp.value() << endl;
        cout << "Time: " << temp.time() <<endl <<endl;
    }
    google::protobuf::ShutdownProtobufLibrary();
}

FileWriter::FileWriter(std::string file_name) {
    //create a folder for the files with binary data
    mkdir("../storage", 0777);
    string path = "../storage/" + file_name;
    myfile.open(path, ios_base::out | ios_base::binary);
}