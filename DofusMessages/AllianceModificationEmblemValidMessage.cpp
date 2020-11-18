#include "AllianceModificationEmblemValidMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceModificationEmblemValidMessage::deserialize(CustomDataInput *input) {
    this->Alliancemblem.deserialize(input);
}