#include "GameRolePlayNamedActorInformations.h"
#include "GameRolePlayActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayNamedActorInformations::deserialize(CustomDataInput *input) {
    GameRolePlayActorInformations::deserialize(input);
    this->_nameFunc(input);
}

void GameRolePlayNamedActorInformations::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}
