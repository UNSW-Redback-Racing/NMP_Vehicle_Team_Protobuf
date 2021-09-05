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
