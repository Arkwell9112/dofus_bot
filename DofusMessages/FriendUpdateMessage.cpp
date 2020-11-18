#include "FriendUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/FriendInformations.h"

void FriendUpdateMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = input->readUnsignedShort();
    this->friendUpdated = *dynamic_cast<FriendInformations *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

}