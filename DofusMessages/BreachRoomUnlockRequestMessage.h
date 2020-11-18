#ifndef BREACHROOMUNLOCKREQUESTMESSAGE_H
#define BREACHROOMUNLOCKREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachRoomUnlockRequestMessage : public DeserializeInterface {
public:
    unsigned int roomId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _roomIdFunc(CustomDataInput *input);
};

#endif