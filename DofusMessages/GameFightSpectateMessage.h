#ifndef GAMEFIGHTSPECTATEMESSAGE_H
#define GAMEFIGHTSPECTATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Idol.h"

#include "../DofusTypes/GameFightEffectTriggerCount.h"

#include "../DofusTypes/GameActionMark.h"

#include "../DofusTypes/FightDispellableEffectExtendedInformations.h"

#include <string>
#include <vector>

class GameFightSpectateMessage : public DeserializeInterface {
public:
    std::vector<FightDispellableEffectExtendedInformations> effects;
    std::vector<GameActionMark> marks;
    unsigned int gameTurn = 0;
    unsigned int fightStart = 0;
    std::vector<Idol> idols;
    std::vector<GameFightEffectTriggerCount> fxTriggerCounts;

    void deserialize(CustomDataInput *input);

private:
    void _gameTurnFunc(CustomDataInput *input);

    void _fightStartFunc(CustomDataInput *input);
};

#endif