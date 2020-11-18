#ifndef DUNGEONKEYRINGUPDATEMESSAGE_H
#define DUNGEONKEYRINGUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DungeonKeyRingUpdateMessage : public DeserializeInterface {
public:
    unsigned int dungeonId = 0;
    bool available = false;

    void deserialize(CustomDataInput *input);

private:
    void _dungeonIdFunc(CustomDataInput *input);

    void _availableFunc(CustomDataInput *input);
};

#endif