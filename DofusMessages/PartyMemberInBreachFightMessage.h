#ifndef PARTYMEMBERINBREACHFIGHTMESSAGE_H
#define PARTYMEMBERINBREACHFIGHTMESSAGE_H

#include "AbstractPartyMemberInFightMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyMemberInBreachFightMessage : public AbstractPartyMemberInFightMessage {
public:
    unsigned int floor = 0;
    unsigned int room = 0;

    void deserialize(CustomDataInput *input);

private:
    void _floorFunc(CustomDataInput *input);

    void _roomFunc(CustomDataInput *input);
};

#endif