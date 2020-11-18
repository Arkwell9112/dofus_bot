#ifndef GAMEROLEPLAYMOUNTINFORMATIONS_H
#define GAMEROLEPLAYMOUNTINFORMATIONS_H

#include "GameRolePlayNamedActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayMountInformations : public GameRolePlayNamedActorInformations {
public:
    std::string ownerName;
    unsigned int level = 0;

    void deserialize(CustomDataInput *input);

private:
    void _ownerNameFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);
};

#endif