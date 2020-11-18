#ifndef DEBTSUPDATEMESSAGE_H
#define DEBTSUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/DebtInformation.h"

#include <string>
#include <vector>

class DebtsUpdateMessage : public DeserializeInterface {
public:
    unsigned int action = 0;
    std::vector<DebtInformation> debts;

    void deserialize(CustomDataInput *input);

private:
    void _actionFunc(CustomDataInput *input);

    void _debtsFunc(CustomDataInput *input);
};

#endif