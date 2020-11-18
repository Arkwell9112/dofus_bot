#include "GameRolePlayNamedActorInformations.h"
#include "GameRolePlayMountInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayMountInformations::deserialize(CustomDataInput *input) {
    GameRolePlayNamedActorInformations::deserialize(input);
    this->_ownerNameFunc(input);
    this->_levelFunc(input);
}

void GameRolePlayMountInformations::_ownerNameFunc(CustomDataInput *input) {
    this->ownerName = input->readUTF();
}

void GameRolePlayMountInformations::_levelFunc(CustomDataInput *input) {
    this->level = input->readUnsignedByte();
    if (this->level < 0 || this->level > 255) {

    }
}
