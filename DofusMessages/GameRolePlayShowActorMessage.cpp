#include "GameRolePlayShowActorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameRolePlayActorInformations.h"

void GameRolePlayShowActorMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = input->readUnsignedShort();
    this->informations = *dynamic_cast<GameRolePlayActorInformations *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

}