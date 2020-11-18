#ifndef FIGHTOPTIONSINFORMATIONS_H
#define FIGHTOPTIONSINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightOptionsInformations : public DeserializeInterface {
public:
    bool isSecret = false;
    bool isRestrictedToPartyOnly = false;
    bool isClosed = false;
    bool isAskingForHelp = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);
};

#endif