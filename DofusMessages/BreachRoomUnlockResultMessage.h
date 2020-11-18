#ifndef BREACHROOMUNLOCKRESULTMESSAGE_H
#define BREACHROOMUNLOCKRESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachRoomUnlockResultMessage : public DeserializeInterface {
public:
    unsigned int roomId = 0;
    unsigned int result = 0;

    void deserialize(CustomDataInput *input);

private:
    void _roomIdFunc(CustomDataInput *input);

    void _resultFunc(CustomDataInput *input);
};

#endif