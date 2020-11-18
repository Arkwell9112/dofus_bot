#include "AllianceKickRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceKickRequestMessage::deserialize(CustomDataInput *input) {
    this->_kickedIdFunc(input);
}

void AllianceKickRequestMessage::_kickedIdFunc(CustomDataInput *input) {
    this->kickedId = input->readVarUhInt();
    if (this->kickedId < 0) {

    }
}
