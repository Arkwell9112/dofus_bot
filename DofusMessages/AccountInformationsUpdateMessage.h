#ifndef ACCOUNTINFORMATIONSUPDATEMESSAGE_H
#define ACCOUNTINFORMATIONSUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AccountInformationsUpdateMessage : public DeserializeInterface {
public:
    double subscriptionEndDate = 0;

    void deserialize(CustomDataInput *input);

private:
    void _subscriptionEndDateFunc(CustomDataInput *input);
};

#endif