#ifndef TELEPORTONSAMEMAPMESSAGE_H
#define TELEPORTONSAMEMAPMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TeleportOnSameMapMessage : public DeserializeInterface {
public:
    double targetId = 0;
    unsigned int cellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);

    void _cellIdFunc(CustomDataInput *input);
};

#endif