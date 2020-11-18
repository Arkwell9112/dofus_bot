#ifndef ACCOUNTLINKREQUIREDMESSAGE_H
#define ACCOUNTLINKREQUIREDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AccountLinkRequiredMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif