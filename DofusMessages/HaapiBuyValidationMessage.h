#ifndef HAAPIBUYVALIDATIONMESSAGE_H
#define HAAPIBUYVALIDATIONMESSAGE_H

#include "HaapiValidationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HaapiBuyValidationMessage : public HaapiValidationMessage {
public:
    double amount = 0;
    std::string email;

    void deserialize(CustomDataInput *input);

private:
    void _amountFunc(CustomDataInput *input);

    void _emailFunc(CustomDataInput *input);
};

#endif