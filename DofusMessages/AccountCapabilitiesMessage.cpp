#include "AccountCapabilitiesMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AccountCapabilitiesMessage::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
    this->_accountIdFunc(input);
    this->_breedsVisibleFunc(input);
    this->_breedsAvailableFunc(input);
    this->_statusFunc(input);
}

void AccountCapabilitiesMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->tutorialAvailable = BooleanByteWrapper::getFlag(_box0, 0);
    this->canCreateNewCharacter = BooleanByteWrapper::getFlag(_box0, 1);
}

void AccountCapabilitiesMessage::_accountIdFunc(CustomDataInput *input) {
    this->accountId = input->readInt();
    if (this->accountId < 0) {

    }
}

void AccountCapabilitiesMessage::_breedsVisibleFunc(CustomDataInput *input) {
    this->breedsVisible = input->readVarUhInt();
    if (this->breedsVisible < 0) {

    }
}

void AccountCapabilitiesMessage::_breedsAvailableFunc(CustomDataInput *input) {
    this->breedsAvailable = input->readVarUhInt();
    if (this->breedsAvailable < 0) {

    }
}

void AccountCapabilitiesMessage::_statusFunc(CustomDataInput *input) {
    this->status = input->readByte();
}
