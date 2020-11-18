#include "PrismInformation.h"
#include "GameRolePlayPrismInformations.h"
#include "GameRolePlayActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayPrismInformations::deserialize(CustomDataInput *input) {
    GameRolePlayActorInformations::deserialize(input);
    unsigned int _id1 = input->readUnsignedShort();
    this->prism = *dynamic_cast<PrismInformation *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

}