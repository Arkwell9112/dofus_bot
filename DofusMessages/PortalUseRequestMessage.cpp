#include "PortalUseRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PortalUseRequestMessage::deserialize(CustomDataInput *input) {
    this->_portalIdFunc(input);
}

void PortalUseRequestMessage::_portalIdFunc(CustomDataInput *input) {
    this->portalId = input->readVarUhInt();
    if (this->portalId < 0) {

    }
}
