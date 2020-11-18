#ifndef CHARACTERCANBECREATEDREQUESTMESSAGE_H
#define CHARACTERCANBECREATEDREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterCanBeCreatedRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif