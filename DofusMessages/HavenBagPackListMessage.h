#ifndef HAVENBAGPACKLISTMESSAGE_H
#define HAVENBAGPACKLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HavenBagPackListMessage : public DeserializeInterface {
public:
    std::vector<int> packIds;

    void deserialize(CustomDataInput *input);

private:
    void _packIdsFunc(CustomDataInput *input);
};

#endif