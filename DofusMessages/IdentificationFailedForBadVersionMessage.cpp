#include "IdentificationFailedMessage.h"
#include "IdentificationFailedForBadVersionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Version.h"

void IdentificationFailedForBadVersionMessage::deserialize(CustomDataInput *input) {
    IdentificationFailedMessage::deserialize(input);
    this->requiredVersion.deserialize(input);
}