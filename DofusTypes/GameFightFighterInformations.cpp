#include "GameFightMinimalStats.h"
#include "GameFightFighterInformations.h"
#include "GameContextActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightFighterInformations::deserialize(CustomDataInput *input) {
    unsigned int _val4 = 0;
    GameContextActorInformations::deserialize(input);
    this->spawnInfo.deserialize(input);
    this->_waveFunc(input);
    unsigned int _id3 = input->readUnsignedShort();
    this->stats = *dynamic_cast<GameFightMinimalStats *>(ProtocolTypeManager::getInstance(_id3, input));
    ProtocolTypeManager::deleteLastInstance();

    unsigned int _previousPositionsLen = input->readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _previousPositionsLen; _i4++) {
        _val4 = input->readVarUhShort();
        if (_val4 < 0 || _val4 > 559) {

        }
        this->previousPositions.push_back(_val4);
    }
}

void GameFightFighterInformations::_waveFunc(CustomDataInput *input) {
    this->wave = input->readByte();
    if (this->wave < 0) {

    }
}

void GameFightFighterInformations::_previousPositionsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0 || _val > 559) {

    }
    this->previousPositions.push_back(_val);
}
