#include "CharacterSelectedSuccessMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterSelectedSuccessMessage::deserialize(CustomDataInput *input) {
    this->infos.deserialize(input);
    this->_isCollectingStatsFunc(input);
}

void CharacterSelectedSuccessMessage::_isCollectingStatsFunc(CustomDataInput *input) {
    this->isCollectingStats = input->readBoolean();
}
