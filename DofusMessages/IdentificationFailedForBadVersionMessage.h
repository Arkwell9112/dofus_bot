#ifndef IDENTIFICATIONFAILEDFORBADVERSIONMESSAGE_H
#define IDENTIFICATIONFAILEDFORBADVERSIONMESSAGE_H

#include "IdentificationFailedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Version.h"

#include <string>
#include <vector>

class IdentificationFailedForBadVersionMessage : public IdentificationFailedMessage {
public:
    Version requiredVersion;

    void deserialize(CustomDataInput *input);

private:
};

#endif