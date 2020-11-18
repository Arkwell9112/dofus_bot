#ifndef GAMEROLEPLAYDELAYEDACTIONFINISHEDMESSAGE_H
#define GAMEROLEPLAYDELAYEDACTIONFINISHEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayDelayedActionFinishedMessage : public DeserializeInterface {
public:
    double delayedCharacterId = 0;
    unsigned int delayTypeId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _delayedCharacterIdFunc(CustomDataInput *input);

    void _delayTypeIdFunc(CustomDataInput *input);
};

#endif