#include "PartyUpdateLightMessage.h"
#include "PartyEntityUpdateLightMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyEntityUpdateLightMessage::deserialize(CustomDataInput *input) {
    PartyUpdateLightMessage::deserialize(input);
    this->_indexIdFunc(input);
}

void PartyEntityUpdateLightMessage::_indexIdFunc(CustomDataInput *input) {
    this->indexId = input->readByte();
    if (this->indexId < 0) {

    }
}
