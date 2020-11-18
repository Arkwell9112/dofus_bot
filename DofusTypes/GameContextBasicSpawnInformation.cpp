#include "SpawnInformation.h"
#include "GameContextBasicSpawnInformation.h"
#include "GameContextActorPositionInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameContextBasicSpawnInformation::deserialize(CustomDataInput *input) {
    this->_teamIdFunc(input);
    this->_aliveFunc(input);
    unsigned int _id3 = input->readUnsignedShort();
    this->informations = *dynamic_cast<GameContextActorPositionInformations *>(ProtocolTypeManager::getInstance(_id3,
                                                                                                                input));
    ProtocolTypeManager::deleteLastInstance();

}

void GameContextBasicSpawnInformation::_teamIdFunc(CustomDataInput *input) {
    this->teamId = input->readByte();
    if (this->teamId < 0) {

    }
}

void GameContextBasicSpawnInformation::_aliveFunc(CustomDataInput *input) {
    this->alive = input->readBoolean();
}
