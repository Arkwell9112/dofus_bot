#ifndef PARTYENTITYUPDATELIGHTMESSAGE_H
#define PARTYENTITYUPDATELIGHTMESSAGE_H

#include "PartyUpdateLightMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyEntityUpdateLightMessage : public PartyUpdateLightMessage {
public:
    unsigned int indexId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _indexIdFunc(CustomDataInput *input);
};

#endif