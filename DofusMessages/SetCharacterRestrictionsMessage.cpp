#include "SetCharacterRestrictionsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SetCharacterRestrictionsMessage::deserialize(CustomDataInput *input) {
    this->_actorIdFunc(input);
    this->restrictions.deserialize(input);
}

void SetCharacterRestrictionsMessage::_actorIdFunc(CustomDataInput *input) {
    this->actorId = input->readDouble();
    if (this->actorId < -9007199254740990 || this->actorId > 9007199254740990) {

    }
}
