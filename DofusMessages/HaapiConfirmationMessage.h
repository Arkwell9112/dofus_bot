#ifndef HAAPICONFIRMATIONMESSAGE_H
#define HAAPICONFIRMATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HaapiConfirmationMessage : public DeserializeInterface {
public:
    double kamas = 0;
    double amount = 0;
    unsigned int rate = 0;
    unsigned int action = 0;
    std::string transaction;

    void deserialize(CustomDataInput *input);

private:
    void _kamasFunc(CustomDataInput *input);

    void _amountFunc(CustomDataInput *input);

    void _rateFunc(CustomDataInput *input);

    void _actionFunc(CustomDataInput *input);

    void _transactionFunc(CustomDataInput *input);
};

#endif