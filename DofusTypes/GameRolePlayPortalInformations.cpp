#include "PortalInformation.h"
#include "GameRolePlayPortalInformations.h"
#include "GameRolePlayActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayPortalInformations::deserialize(CustomDataInput *input) {
    GameRolePlayActorInformations::deserialize(input);
    unsigned int _id1 = input->readUnsignedShort();
    this->portal = *dynamic_cast<PortalInformation *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

}