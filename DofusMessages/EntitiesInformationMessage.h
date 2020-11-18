#ifndef ENTITIESINFORMATIONMESSAGE_H
#define ENTITIESINFORMATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/EntityInformation.h"

#include <string>
#include <vector>

class EntitiesInformationMessage : public DeserializeInterface {
public:
    std::vector<EntityInformation> entities;

    void deserialize(CustomDataInput *input);

private:
};

#endif