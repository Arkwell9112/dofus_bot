#ifndef ACCOUNTHOUSEMESSAGE_H
#define ACCOUNTHOUSEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/HouseInformations.h"

#include "../DofusTypes/AccountHouseInformations.h"

#include <string>
#include <vector>

class AccountHouseMessage : public DeserializeInterface {
public:
    std::vector<AccountHouseInformations> houses;

    void deserialize(CustomDataInput *input);

private:
};

#endif