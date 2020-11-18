#ifndef GAMEROLEPLAYGROUPMONSTERINFORMATIONS_H
#define GAMEROLEPLAYGROUPMONSTERINFORMATIONS_H

#include "GroupMonsterStaticInformations.h"
#include "GameRolePlayActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayGroupMonsterInformations : public GameRolePlayActorInformations {
public:
    GroupMonsterStaticInformations staticInfos;
    int lootShare = 0;
    int alignmentSide = 0;
    bool keyRingBonus = false;
    bool hasHardcoreDrop = false;
    bool hasAVARewardToken = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _lootShareFunc(CustomDataInput *input);

    void _alignmentSideFunc(CustomDataInput *input);
};

#endif