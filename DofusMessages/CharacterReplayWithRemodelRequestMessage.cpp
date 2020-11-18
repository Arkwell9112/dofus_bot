#include "CharacterReplayWithRemodelRequestMessage.h"
#include "CharacterReplayRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterReplayWithRemodelRequestMessage::deserialize(CustomDataInput *input) {
    CharacterReplayRequestMessage::deserialize(input);
    this->remodel.deserialize(input);
}