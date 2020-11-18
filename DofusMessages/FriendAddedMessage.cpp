#include "FriendAddedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/FriendInformations.h"

void FriendAddedMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = input->readUnsignedShort();
    this->friendAdded = *dynamic_cast<FriendInformations *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

}