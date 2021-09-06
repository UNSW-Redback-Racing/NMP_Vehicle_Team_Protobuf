#ifndef SAMPLE_H
#define SAMPLE_H

#include <iostream>
#include <memory>
#include <sstream>

class Sample
{

public:
    Sample() = default;
    Sample(const int channel, const float &value, const float &time)
        : channel_{channel}, value_{value}, time_{time} {};
    ~Sample() = default;

    int getChannel() const { return channel_; }
    float getValue() const { return value_; }
    float getTime() const { return time_; }

private:
    int channel_ = -1;
    float value_ = -1;
    float time_ = -1;
};

typedef std::unique_ptr<Sample> SamplePtr;
#endif
