#include "IdolSelectedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Idol.h"

void IdolSelectedMessage::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
    this->_idolIdFunc(input);
}

void IdolSelectedMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->activate = BooleanByteWrapper::getFlag(_box0, 0);
    this->party = BooleanByteWrapper::getFlag(_box0, 1);
}

void IdolSelectedMessage::_idolIdFunc(CustomDataInput *input) {
    this->idolId = input->readVarUhShort();
    if (this->idolId < 0) {

    }
}
