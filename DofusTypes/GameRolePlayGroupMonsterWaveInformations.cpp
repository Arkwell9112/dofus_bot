#include "GroupMonsterStaticInformations.h"
#include "GameRolePlayGroupMonsterWaveInformations.h"
#include "GameRolePlayGroupMonsterInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayGroupMonsterWaveInformations::deserialize(CustomDataInput *input) {
    unsigned int _id2 = 0;
    GroupMonsterStaticInformations _item2;
    GameRolePlayGroupMonsterInformations::deserialize(input);
    this->_nbWavesFunc(input);
    unsigned int _alternativesLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _alternativesLen; _i2++) {
        _id2 = input->readUnsignedShort();
        _item2 = *dynamic_cast<GroupMonsterStaticInformations *>(ProtocolTypeManager::getInstance(_id2, input));
        ProtocolTypeManager::deleteLastInstance();

        this->alternatives.push_back(_item2);
    }
}

void GameRolePlayGroupMonsterWaveInformations::_nbWavesFunc(CustomDataInput *input) {
    this->nbWaves = input->readByte();
    if (this->nbWaves < 0) {

    }
}

void GameRolePlayGroupMonsterWaveInformations::_alternativesFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    GroupMonsterStaticInformations _item;
    _item.deserialize(input);
    this->alternatives.push_back(_item);
}
