#ifndef GAMEROLEPLAYMERCHANTINFORMATIONS_H
#define GAMEROLEPLAYMERCHANTINFORMATIONS_H

#include "HumanOption.h"
#include "GameRolePlayNamedActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayMerchantInformations : public GameRolePlayNamedActorInformations {
public:
    unsigned int sellType = 0;
    std::vector<HumanOption> options;

    void deserialize(CustomDataInput *input);

private:
    void _sellTypeFunc(CustomDataInput *input);

    void _optionsFunc(CustomDataInput *input);
};

#endif