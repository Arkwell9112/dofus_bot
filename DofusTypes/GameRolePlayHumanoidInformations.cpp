#include "HumanInformations.h"
#include "GameRolePlayNamedActorInformations.h"
#include "GameRolePlayHumanoidInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayHumanoidInformations::deserialize(CustomDataInput *input) {
    GameRolePlayNamedActorInformations::deserialize(input);
    unsigned int _id1 = input->readUnsignedShort();
    this->humanoidInfo = *dynamic_cast<HumanInformations *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

    this->_accountIdFunc(input);
}

void GameRolePlayHumanoidInformations::_accountIdFunc(CustomDataInput *input) {
    this->accountId = input->readInt();
    if (this->accountId < 0) {

    }
}
