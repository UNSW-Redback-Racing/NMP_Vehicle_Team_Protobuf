#ifndef SAMPLE_H
#define SAMPLE_H

#include <iostream>
#include <memory>
#include <sstream>

class Sample
{

    friend bool operator==(const Sample &lhs, const Sample &rhs);
    friend bool operator!=(const Sample &lhs, const Sample &rhs);
    // used for printing / debugging purposes
    friend std::ostream &operator<<(std::ostream &os, const Sample &sample);

public:
    Sample() = default;
    Sample(const int channel, const float &value, const float &time);
    ~Sample() = default;

    int getChannel() const { return channel_; }
    float getValue() const { return value_; }
    float getTime() const { return time_; }

    void toJSONString(std::string &output) const;

private:
    int channel_ = -1;
    float value_ = -1;
    float time_ = -1;
};

typedef std::unique_ptr<Sample> SamplePtr;
#endif
