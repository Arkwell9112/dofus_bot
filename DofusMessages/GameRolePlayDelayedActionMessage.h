#ifndef GAMEROLEPLAYDELAYEDACTIONMESSAGE_H
#define GAMEROLEPLAYDELAYEDACTIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayDelayedActionMessage : public DeserializeInterface {
public:
    double delayedCharacterId = 0;
    unsigned int delayTypeId = 0;
    double delayEndTime = 0;

    void deserialize(CustomDataInput *input);

private:
    void _delayedCharacterIdFunc(CustomDataInput *input);

    void _delayTypeIdFunc(CustomDataInput *input);

    void _delayEndTimeFunc(CustomDataInput *input);
};

#endif