# NMP_Vehicle_Team_Protobuf


## Background

The Redback Vehicle Team is responsible for aggregating, logging and collecting sensor data onboard the car. Currently, the team manages a low-level c++ data logging firmware project that runs on a Raspberry Pi 4. The Vehicle team is also responsible for creating and maintaining configuration files that are used to provision the firmware itself. This includes being able to generate config files on the Telem UI. 

## Task-  Serialising sensor data using protocol buffers

In the current implementation of the firmware, sensor data is stored in a human-readable JSON format. An example extract of sensor data is shown below, and all the data samples follow the same format: 


```json
{ value: 5, time: 12.05, channel: 1000 } 
{ value: 7, time: 12.07, channel: 1000 }
{ value: 2.1, time: 12.12, channel: 1050 }
{ value: 10.2, time: 12.26, channel: 1100 }
```
This works just fine, but when log files are over 10,000 lines long, having stored data in JSON is not optimal. 

Your task is to implement a ‘File Writer’ module that takes in incoming sample data, serialises it using Protobuf, and stores it as a binary, leading to significantly reduced file sizes and more efficient data transfer overall.

Protobuf is a language-agnostic protocol used to serialize structured data that can be implemented in C++.

You will need to serialise incoming sample data and store it into a file. You will also need to deserialise the data back to JSON.

This is something that we are planning to implement in our current firmware and the code that you will write for this project will be used :slight_smile: 

You will be given:

A CMake build system, you will need to manually include protobuf. 

A data emulator which outputs random data samples in the JSON format specified above.

You will need to submit:

A FileWriter.cpp file.

A directory containing serialised and deserialised versions of data files of different sizes.

A README.md file outlining any usage information, errors, and any other information that you deem relevant.

Fork the repository and send a link to it for submission.

