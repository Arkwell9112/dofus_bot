#ifndef IDENTIFICATIONFAILEDBANNEDMESSAGE_H
#define IDENTIFICATIONFAILEDBANNEDMESSAGE_H

#include "IdentificationFailedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class IdentificationFailedBannedMessage : public IdentificationFailedMessage {
public:
    double banEndDate = 0;

    void deserialize(CustomDataInput *input);

private:
    void _banEndDateFunc(CustomDataInput *input);
};

#endif