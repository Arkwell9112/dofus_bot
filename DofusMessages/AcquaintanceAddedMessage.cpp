#include "AcquaintanceAddedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AcquaintanceInformation.h"

void AcquaintanceAddedMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = input->readUnsignedShort();
    this->acquaintanceAdded = *dynamic_cast<AcquaintanceInformation *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

}