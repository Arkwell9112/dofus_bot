#ifndef BREACHROOMLOCKEDMESSAGE_H
#define BREACHROOMLOCKEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachRoomLockedMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif