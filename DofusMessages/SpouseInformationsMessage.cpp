#include "SpouseInformationsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/FriendSpouseInformations.h"

void SpouseInformationsMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = input->readUnsignedShort();
    this->spouse = *dynamic_cast<FriendSpouseInformations *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

}