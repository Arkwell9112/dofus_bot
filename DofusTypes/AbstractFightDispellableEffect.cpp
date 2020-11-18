#include "AbstractFightDispellableEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AbstractFightDispellableEffect::deserialize(CustomDataInput *input) {
    this->_uidFunc(input);
    this->_targetIdFunc(input);
    this->_turnDurationFunc(input);
    this->_dispelableFunc(input);
    this->_spellIdFunc(input);
    this->_effectIdFunc(input);
    this->_parentBoostUidFunc(input);
}

void AbstractFightDispellableEffect::_uidFunc(CustomDataInput *input) {
    this->uid = input->readVarUhInt();
    if (this->uid < 0) {

    }
}

void AbstractFightDispellableEffect::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void AbstractFightDispellableEffect::_turnDurationFunc(CustomDataInput *input) {
    this->turnDuration = input->readShort();
}

void AbstractFightDispellableEffect::_dispelableFunc(CustomDataInput *input) {
    this->dispelable = input->readByte();
    if (this->dispelable < 0) {

    }
}

void AbstractFightDispellableEffect::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readVarUhShort();
    if (this->spellId < 0) {

    }
}

void AbstractFightDispellableEffect::_effectIdFunc(CustomDataInput *input) {
    this->effectId = input->readVarUhInt();
    if (this->effectId < 0) {

    }
}

void AbstractFightDispellableEffect::_parentBoostUidFunc(CustomDataInput *input) {
    this->parentBoostUid = input->readVarUhInt();
    if (this->parentBoostUid < 0) {

    }
}
