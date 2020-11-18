#include "AtlasPointInformationsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AtlasPointInformationsMessage::deserialize(CustomDataInput *input) {
    this->type.deserialize(input);
}