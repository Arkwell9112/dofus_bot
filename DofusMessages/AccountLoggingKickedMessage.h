#ifndef ACCOUNTLOGGINGKICKEDMESSAGE_H
#define ACCOUNTLOGGINGKICKEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AccountLoggingKickedMessage : public DeserializeInterface {
public:
    unsigned int days = 0;
    unsigned int hours = 0;
    unsigned int minutes = 0;

    void deserialize(CustomDataInput *input);

private:
    void _daysFunc(CustomDataInput *input);

    void _hoursFunc(CustomDataInput *input);

    void _minutesFunc(CustomDataInput *input);
};

#endif