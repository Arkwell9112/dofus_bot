#ifndef ACQUAINTANCEADDEDMESSAGE_H
#define ACQUAINTANCEADDEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AcquaintanceInformation.h"

#include <string>
#include <vector>

class AcquaintanceAddedMessage : public DeserializeInterface {
public:
    AcquaintanceInformation acquaintanceAdded;

    void deserialize(CustomDataInput *input);

private:
};

#endif