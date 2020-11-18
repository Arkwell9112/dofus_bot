#include "PartyModifiableStatusMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyModifiableStatusMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
    this->_enabledFunc(input);
}

void PartyModifiableStatusMessage::_enabledFunc(CustomDataInput *input) {
    this->enabled = input->readBoolean();
}
