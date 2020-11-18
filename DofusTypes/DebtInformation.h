#ifndef DEBTINFORMATION_H
#define DEBTINFORMATION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DebtInformation : public DeserializeInterface {
public:
    double id = 0;
    double timestamp = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _timestampFunc(CustomDataInput *input);
};

#endif