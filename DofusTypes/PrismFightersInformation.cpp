#include "PrismFightersInformation.h"
#include "CharacterMinimalPlusLookInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismFightersInformation::deserialize(CustomDataInput *input) {
    unsigned int _id3 = 0;
    CharacterMinimalPlusLookInformations _item3;
    unsigned int _id4 = 0;
    CharacterMinimalPlusLookInformations _item4;
    this->_subAreaIdFunc(input);
    this->waitingForHelpInfo.deserialize(input);
    unsigned int _allyCharactersInformationsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _allyCharactersInformationsLen; _i3++) {
        _id3 = input->readUnsignedShort();
        _item3 = *dynamic_cast<CharacterMinimalPlusLookInformations *>(ProtocolTypeManager::getInstance(_id3, input));
        ProtocolTypeManager::deleteLastInstance();

        this->allyCharactersInformations.push_back(_item3);
    }
    unsigned int _enemyCharactersInformationsLen = input->readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _enemyCharactersInformationsLen; _i4++) {
        _id4 = input->readUnsignedShort();
        _item4 = *dynamic_cast<CharacterMinimalPlusLookInformations *>(ProtocolTypeManager::getInstance(_id4, input));
        ProtocolTypeManager::deleteLastInstance();

        this->enemyCharactersInformations.push_back(_item4);
    }
}

void PrismFightersInformation::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void PrismFightersInformation::_allyCharactersInformationsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    CharacterMinimalPlusLookInformations _item;
    _item.deserialize(input);
    this->allyCharactersInformations.push_back(_item);
}

void PrismFightersInformation::_enemyCharactersInformationsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    CharacterMinimalPlusLookInformations _item;
    _item.deserialize(input);
    this->enemyCharactersInformations.push_back(_item);
}
