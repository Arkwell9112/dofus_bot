#include "BreachStateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectEffectInteger.h"

#include "../DofusTypes/ObjectEffect.h"

void BreachStateMessage::deserialize(CustomDataInput *input) {
    ObjectEffectInteger _item2;
    this->owner.deserialize(input);
    unsigned int _bonusesLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _bonusesLen; _i2++) {
        _item2.deserialize(input);
        this->bonuses.push_back(_item2);
    }
    this->_bugdetFunc(input);
    this->_savedFunc(input);
}

void BreachStateMessage::_bugdetFunc(CustomDataInput *input) {
    this->bugdet = input->readVarUhInt();
    if (this->bugdet < 0) {

    }
}

void BreachStateMessage::_savedFunc(CustomDataInput *input) {
    this->saved = input->readBoolean();
}
