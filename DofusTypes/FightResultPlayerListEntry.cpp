#include "FightResultPlayerListEntry.h"
#include "FightResultFighterListEntry.h"
#include "FightResultAdditionalData.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightResultPlayerListEntry::deserialize(CustomDataInput *input) {
    unsigned int _id2 = 0;
    FightResultAdditionalData _item2;
    FightResultFighterListEntry::deserialize(input);
    this->_levelFunc(input);
    unsigned int _additionalLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _additionalLen; _i2++) {
        _id2 = input->readUnsignedShort();
        _item2 = *dynamic_cast<FightResultAdditionalData *>(ProtocolTypeManager::getInstance(_id2, input));
        ProtocolTypeManager::deleteLastInstance();

        this->additional.push_back(_item2);
    }
}

void FightResultPlayerListEntry::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 0) {

    }
}

void FightResultPlayerListEntry::_additionalFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    FightResultAdditionalData _item;
    _item.deserialize(input);
    this->additional.push_back(_item);
}
