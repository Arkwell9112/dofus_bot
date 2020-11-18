#ifndef PARTYIDOL_H
#define PARTYIDOL_H

#include "Idol.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyIdol : public Idol {
public:
    std::vector<double> ownersIds;

    void deserialize(CustomDataInput *input);

private:
    void _ownersIdsFunc(CustomDataInput *input);
};

#endif