#include "GameRolePlayNpcInformations.h"
#include "GameRolePlayActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayNpcInformations::deserialize(CustomDataInput *input) {
    GameRolePlayActorInformations::deserialize(input);
    this->_npcIdFunc(input);
    this->_sexFunc(input);
    this->_specialArtworkIdFunc(input);
}

void GameRolePlayNpcInformations::_npcIdFunc(CustomDataInput *input) {
    this->npcId = input->readVarUhShort();
    if (this->npcId < 0) {

    }
}

void GameRolePlayNpcInformations::_sexFunc(CustomDataInput *input) {
    this->sex = input->readBoolean();
}

void GameRolePlayNpcInformations::_specialArtworkIdFunc(CustomDataInput *input) {
    this->specialArtworkId = input->readVarUhShort();
    if (this->specialArtworkId < 0) {

    }
}
