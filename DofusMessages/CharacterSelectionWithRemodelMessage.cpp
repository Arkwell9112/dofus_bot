#include "CharacterSelectionWithRemodelMessage.h"
#include "CharacterSelectionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterSelectionWithRemodelMessage::deserialize(CustomDataInput *input) {
    CharacterSelectionMessage::deserialize(input);
    this->remodel.deserialize(input);
}