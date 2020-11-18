#include "GameDataPaddockObjectAddMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

void GameDataPaddockObjectAddMessage::deserialize(CustomDataInput *input) {
    this->paddockItemDescription.deserialize(input);
}