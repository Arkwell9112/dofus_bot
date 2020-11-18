#ifndef KAMADEBTINFORMATION_H
#define KAMADEBTINFORMATION_H

#include "DebtInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class KamaDebtInformation : public DebtInformation {
public:
    double kamas = 0;

    void deserialize(CustomDataInput *input);

private:
    void _kamasFunc(CustomDataInput *input);
};

#endif