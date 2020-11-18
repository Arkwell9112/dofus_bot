#ifndef ABSTRACTCONTACTINFORMATIONS_H
#define ABSTRACTCONTACTINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AbstractContactInformations : public DeserializeInterface {
public:
    unsigned int accountId = 0;
    std::string accountName;

    void deserialize(CustomDataInput *input);

private:
    void _accountIdFunc(CustomDataInput *input);

    void _accountNameFunc(CustomDataInput *input);
};

#endif