#include "TaxCollectorFightersInformation.h"
#include "CharacterMinimalPlusLookInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TaxCollectorFightersInformation::deserialize(CustomDataInput *input) {
    unsigned int _id2 = 0;
    CharacterMinimalPlusLookInformations _item2;
    unsigned int _id3 = 0;
    CharacterMinimalPlusLookInformations _item3;
    this->_collectorIdFunc(input);
    unsigned int _allyCharactersInformationsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _allyCharactersInformationsLen; _i2++) {
        _id2 = input->readUnsignedShort();
        _item2 = *dynamic_cast<CharacterMinimalPlusLookInformations *>(ProtocolTypeManager::getInstance(_id2, input));
        ProtocolTypeManager::deleteLastInstance();

        this->allyCharactersInformations.push_back(_item2);
    }
    unsigned int _enemyCharactersInformationsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _enemyCharactersInformationsLen; _i3++) {
        _id3 = input->readUnsignedShort();
        _item3 = *dynamic_cast<CharacterMinimalPlusLookInformations *>(ProtocolTypeManager::getInstance(_id3, input));
        ProtocolTypeManager::deleteLastInstance();

        this->enemyCharactersInformations.push_back(_item3);
    }
}

void TaxCollectorFightersInformation::_collectorIdFunc(CustomDataInput *input) {
    this->collectorId = input->readDouble();
    if (this->collectorId < 0 || this->collectorId > 9007199254740990) {

    }
}

void TaxCollectorFightersInformation::_allyCharactersInformationsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    CharacterMinimalPlusLookInformations _item;
    _item.deserialize(input);
    this->allyCharactersInformations.push_back(_item);
}

void TaxCollectorFightersInformation::_enemyCharactersInformationsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    CharacterMinimalPlusLookInformations _item;
    _item.deserialize(input);
    this->enemyCharactersInformations.push_back(_item);
}
