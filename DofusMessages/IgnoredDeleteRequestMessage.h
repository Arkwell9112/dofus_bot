#ifndef IGNOREDDELETEREQUESTMESSAGE_H
#define IGNOREDDELETEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class IgnoredDeleteRequestMessage : public DeserializeInterface {
public:
    unsigned int accountId = 0;
    bool session = false;

    void deserialize(CustomDataInput *input);

private:
    void _accountIdFunc(CustomDataInput *input);

    void _sessionFunc(CustomDataInput *input);
};

#endif