#ifndef HUMANINFORMATIONS_H
#define HUMANINFORMATIONS_H

#include "HumanOption.h"
#include "ActorRestrictionsInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HumanInformations : public DeserializeInterface {
public:
    ActorRestrictionsInformations restrictions;
    bool sex = false;
    std::vector<HumanOption> options;

    void deserialize(CustomDataInput *input);

private:
    void _sexFunc(CustomDataInput *input);

    void _optionsFunc(CustomDataInput *input);
};

#endif