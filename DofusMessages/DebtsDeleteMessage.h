#ifndef DEBTSDELETEMESSAGE_H
#define DEBTSDELETEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DebtsDeleteMessage : public DeserializeInterface {
public:
    unsigned int reason = 0;
    std::vector<double> debts;

    void deserialize(CustomDataInput *input);

private:
    void _reasonFunc(CustomDataInput *input);

    void _debtsFunc(CustomDataInput *input);
};

#endif