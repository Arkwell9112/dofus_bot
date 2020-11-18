#include "BreachReward.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachReward::deserialize(CustomDataInput *input) {
    unsigned int _val2 = 0;
    this->_idFunc(input);
    unsigned int _buyLocksLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _buyLocksLen; _i2++) {
        _val2 = input->readByte();
        if (_val2 < 0) {

        }
        this->buyLocks.push_back(_val2);
    }
    this->_buyCriterionFunc(input);
    this->_remainingQtyFunc(input);
    this->_priceFunc(input);
}

void BreachReward::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhInt();
    if (this->id < 0) {

    }
}

void BreachReward::_buyLocksFunc(CustomDataInput *input) {
    unsigned int _val = input->readByte();
    if (_val < 0) {

    }
    this->buyLocks.push_back(_val);
}

void BreachReward::_buyCriterionFunc(CustomDataInput *input) {
    this->buyCriterion = input->readUTF();
}

void BreachReward::_remainingQtyFunc(CustomDataInput *input) {
    this->remainingQty = input->readVarInt();
}

void BreachReward::_priceFunc(CustomDataInput *input) {
    this->price = input->readVarUhInt();
    if (this->price < 0) {

    }
}
