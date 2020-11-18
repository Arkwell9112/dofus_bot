#include "GameServerInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameServerInformations::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
    this->_idFunc(input);
    this->_typeFunc(input);
    this->_statusFunc(input);
    this->_completionFunc(input);
    this->_charactersCountFunc(input);
    this->_charactersSlotsFunc(input);
    this->_dateFunc(input);
}

void GameServerInformations::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->isMonoAccount = BooleanByteWrapper::getFlag(_box0, 0);
    this->isSelectable = BooleanByteWrapper::getFlag(_box0, 1);
}

void GameServerInformations::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhShort();
    if (this->id < 0) {

    }
}

void GameServerInformations::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
}

void GameServerInformations::_statusFunc(CustomDataInput *input) {
    this->status = input->readByte();
    if (this->status < 0) {

    }
}

void GameServerInformations::_completionFunc(CustomDataInput *input) {
    this->completion = input->readByte();
    if (this->completion < 0) {

    }
}

void GameServerInformations::_charactersCountFunc(CustomDataInput *input) {
    this->charactersCount = input->readByte();
    if (this->charactersCount < 0) {

    }
}

void GameServerInformations::_charactersSlotsFunc(CustomDataInput *input) {
    this->charactersSlots = input->readByte();
    if (this->charactersSlots < 0) {

    }
}

void GameServerInformations::_dateFunc(CustomDataInput *input) {
    this->date = input->readDouble();
    if (this->date < -9007199254740990 || this->date > 9007199254740990) {

    }
}
