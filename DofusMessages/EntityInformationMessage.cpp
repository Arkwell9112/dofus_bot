#include "EntityInformationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/EntityInformation.h"

void EntityInformationMessage::deserialize(CustomDataInput *input) {
    this->entity.deserialize(input);
}