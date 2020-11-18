#include "AlliancePartialListMessage.h"
#include "AllianceListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AlliancePartialListMessage::deserialize(CustomDataInput *input) {
    AllianceListMessage::deserialize(input);
}