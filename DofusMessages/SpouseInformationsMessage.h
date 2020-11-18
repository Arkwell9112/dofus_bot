#ifndef SPOUSEINFORMATIONSMESSAGE_H
#define SPOUSEINFORMATIONSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/FriendSpouseInformations.h"

#include <string>
#include <vector>

class SpouseInformationsMessage : public DeserializeInterface {
public:
    FriendSpouseInformations spouse;

    void deserialize(CustomDataInput *input);

private:
};

#endif