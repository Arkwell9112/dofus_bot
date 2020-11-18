#include "SpawnInformation.h"
#include "GameFightMinimalStats.h"
#include "GameContextSummonsInformation.h"
#include "GameContextBasicSpawnInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameContextSummonsInformation::deserialize(CustomDataInput *input) {
    unsigned int _id5 = 0;
    GameContextBasicSpawnInformation _item5;
    unsigned int _id1 = input->readUnsignedShort();
    this->spawnInformation = *dynamic_cast<SpawnInformation *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

    this->_waveFunc(input);
    this->look.deserialize(input);
    unsigned int _id4 = input->readUnsignedShort();
    this->stats = *dynamic_cast<GameFightMinimalStats *>(ProtocolTypeManager::getInstance(_id4, input));
    ProtocolTypeManager::deleteLastInstance();

    unsigned int _summonsLen = input->readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _summonsLen; _i5++) {
        _id5 = input->readUnsignedShort();
        _item5 = *dynamic_cast<GameContextBasicSpawnInformation *>(ProtocolTypeManager::getInstance(_id5, input));
        ProtocolTypeManager::deleteLastInstance();

        this->summons.push_back(_item5);
    }
}

void GameContextSummonsInformation::_waveFunc(CustomDataInput *input) {
    this->wave = input->readByte();
    if (this->wave < 0) {

    }
}

void GameContextSummonsInformation::_summonsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    GameContextBasicSpawnInformation _item;
    _item.deserialize(input);
    this->summons.push_back(_item);
}
