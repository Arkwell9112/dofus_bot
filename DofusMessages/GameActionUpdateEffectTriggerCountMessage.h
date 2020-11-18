#ifndef GAMEACTIONUPDATEEFFECTTRIGGERCOUNTMESSAGE_H
#define GAMEACTIONUPDATEEFFECTTRIGGERCOUNTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameFightEffectTriggerCount.h"

#include <string>
#include <vector>

class GameActionUpdateEffectTriggerCountMessage : public DeserializeInterface {
public:
    std::vector<GameFightEffectTriggerCount> targetIds;

    void deserialize(CustomDataInput *input);

private:
};

#endif