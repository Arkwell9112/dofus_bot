#include "AllianceFactsRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceFactsRequestMessage::deserialize(CustomDataInput *input) {
    this->_allianceIdFunc(input);
}

void AllianceFactsRequestMessage::_allianceIdFunc(CustomDataInput *input) {
    this->allianceId = input->readVarUhInt();
    if (this->allianceId < 0) {

    }
}
