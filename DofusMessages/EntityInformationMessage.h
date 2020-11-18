#ifndef ENTITYINFORMATIONMESSAGE_H
#define ENTITYINFORMATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/EntityInformation.h"

#include <string>
#include <vector>

class EntityInformationMessage : public DeserializeInterface {
public:
    EntityInformation entity;

    void deserialize(CustomDataInput *input);

private:
};

#endif