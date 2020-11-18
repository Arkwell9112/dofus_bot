#ifndef EXCHANGELEAVEMESSAGE_H
#define EXCHANGELEAVEMESSAGE_H

#include "LeaveDialogMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeLeaveMessage : public LeaveDialogMessage {
public:
    bool success = false;

    void deserialize(CustomDataInput *input);

private:
    void _successFunc(CustomDataInput *input);
};

#endif