#ifndef SERVEROPTIONALFEATURESMESSAGE_H
#define SERVEROPTIONALFEATURESMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ServerOptionalFeaturesMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> features;

    void deserialize(CustomDataInput *input);

private:
    void _featuresFunc(CustomDataInput *input);
};

#endif