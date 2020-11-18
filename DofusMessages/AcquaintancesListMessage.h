#ifndef ACQUAINTANCESLISTMESSAGE_H
#define ACQUAINTANCESLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AcquaintanceInformation.h"

#include <string>
#include <vector>

class AcquaintancesListMessage : public DeserializeInterface {
public:
    std::vector<AcquaintanceInformation> acquaintanceList;

    void deserialize(CustomDataInput *input);

private:
    void _acquaintanceListFunc(CustomDataInput *input);
};

#endif