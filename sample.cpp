#include <sample.hpp>
#include <memory>

Sample::Sample(const int channel, const float &value, const float &time)
    : channel_{channel}, value_{value}, time_{time} {}

void Sample::toJSONString(std::string &output) const
{
    std::stringstream ss;
    ss << "{\"channelnum\":" << getChannel();
    ss << ",\"time\":" << getTime() << ",\"value\":" << getValue();
    ss << "}\n";

    output = ss.str();
}

SamplePtr Sample::Clone()
{
    SamplePtr ret = std::make_unique<Sample>();
    ret->value_ = this->getValue();
    ret->channel_ = this->getChannel();
    ret->time_ = this->getTime();
    return ret;
}

bool operator==(const Sample &lhs, const Sample &rhs)
{
    return lhs.channel_ == rhs.channel_ && lhs.value_ == rhs.value_ &&
           lhs.time_ == rhs.time_;
}

bool operator!=(const Sample &lhs, const Sample &rhs) { return !(lhs == rhs); }

std::ostream &operator<<(std::ostream &os, const Sample &sample)
{
    os << sample.channel_ << ", " << sample.value_ << ", " << sample.time_;
    return os;
}
