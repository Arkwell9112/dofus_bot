#include "GameFightFighterNamedLightInformations.h"
#include "GameFightFighterLightInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightFighterNamedLightInformations::deserialize(CustomDataInput *input) {
    GameFightFighterLightInformations::deserialize(input);
    this->_nameFunc(input);
}

void GameFightFighterNamedLightInformations::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}
