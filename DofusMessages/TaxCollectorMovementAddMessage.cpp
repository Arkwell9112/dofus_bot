#include "TaxCollectorMovementAddMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TaxCollectorMovement.h"

#include "../DofusTypes/TaxCollectorInformations.h"

void TaxCollectorMovementAddMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = input->readUnsignedShort();
    this->informations = *dynamic_cast<TaxCollectorInformations *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

}