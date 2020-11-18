#ifndef BREACHBRANCHESMESSAGE_H
#define BREACHBRANCHESMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ExtendedBreachBranch.h"

#include "../DofusTypes/BreachBranch.h"

#include <string>
#include <vector>

class BreachBranchesMessage : public DeserializeInterface {
public:
    std::vector<ExtendedBreachBranch> branches;

    void deserialize(CustomDataInput *input);

private:
    void _branchesFunc(CustomDataInput *input);
};

#endif