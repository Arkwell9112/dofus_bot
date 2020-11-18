#include "AllianceFactsErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceFactsErrorMessage::deserialize(CustomDataInput *input) {
    this->_allianceIdFunc(input);
}

void AllianceFactsErrorMessage::_allianceIdFunc(CustomDataInput *input) {
    this->allianceId = input->readVarUhInt();
    if (this->allianceId < 0) {

    }
}
