#include "IdolSelectErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Idol.h"

void IdolSelectErrorMessage::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
    this->_reasonFunc(input);
    this->_idolIdFunc(input);
}

void IdolSelectErrorMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->activate = BooleanByteWrapper::getFlag(_box0, 0);
    this->party = BooleanByteWrapper::getFlag(_box0, 1);
}

void IdolSelectErrorMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}

void IdolSelectErrorMessage::_idolIdFunc(CustomDataInput *input) {
    this->idolId = input->readVarUhShort();
    if (this->idolId < 0) {

    }
}
