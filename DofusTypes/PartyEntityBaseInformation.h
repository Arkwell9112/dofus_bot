#ifndef PARTYENTITYBASEINFORMATION_H
#define PARTYENTITYBASEINFORMATION_H

#include "EntityLook.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyEntityBaseInformation : public DeserializeInterface {
public:
    unsigned int indexId = 0;
    unsigned int entityModelId = 0;
    EntityLook entityLook;

    void deserialize(CustomDataInput *input);

private:
    void _indexIdFunc(CustomDataInput *input);

    void _entityModelIdFunc(CustomDataInput *input);
};

#endif