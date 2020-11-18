#include "IgnoredAddedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/IgnoredInformations.h"

void IgnoredAddedMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = input->readUnsignedShort();
    this->ignoreAdded = *dynamic_cast<IgnoredInformations *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

    this->_sessionFunc(input);
}

void IgnoredAddedMessage::_sessionFunc(CustomDataInput *input) {
    this->session = input->readBoolean();
}
