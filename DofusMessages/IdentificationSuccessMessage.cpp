#include "IdentificationSuccessMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IdentificationSuccessMessage::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
    this->_loginFunc(input);
    this->_nicknameFunc(input);
    this->_accountIdFunc(input);
    this->_communityIdFunc(input);
    this->_secretQuestionFunc(input);
    this->_accountCreationFunc(input);
    this->_subscriptionElapsedDurationFunc(input);
    this->_subscriptionEndDateFunc(input);
    this->_havenbagAvailableRoomFunc(input);
}

void IdentificationSuccessMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->hasRights = BooleanByteWrapper::getFlag(_box0, 0);
    this->hasConsoleRight = BooleanByteWrapper::getFlag(_box0, 1);
    this->wasAlreadyConnected = BooleanByteWrapper::getFlag(_box0, 2);
}

void IdentificationSuccessMessage::_loginFunc(CustomDataInput *input) {
    this->login = input->readUTF();
}

void IdentificationSuccessMessage::_nicknameFunc(CustomDataInput *input) {
    this->nickname = input->readUTF();
}

void IdentificationSuccessMessage::_accountIdFunc(CustomDataInput *input) {
    this->accountId = input->readInt();
    if (this->accountId < 0) {

    }
}

void IdentificationSuccessMessage::_communityIdFunc(CustomDataInput *input) {
    this->communityId = input->readByte();
    if (this->communityId < 0) {

    }
}

void IdentificationSuccessMessage::_secretQuestionFunc(CustomDataInput *input) {
    this->secretQuestion = input->readUTF();
}

void IdentificationSuccessMessage::_accountCreationFunc(CustomDataInput *input) {
    this->accountCreation = input->readDouble();
    if (this->accountCreation < 0 || this->accountCreation > 9007199254740990) {

    }
}

void IdentificationSuccessMessage::_subscriptionElapsedDurationFunc(CustomDataInput *input) {
    this->subscriptionElapsedDuration = input->readDouble();
    if (this->subscriptionElapsedDuration < 0 || this->subscriptionElapsedDuration > 9007199254740990) {

    }
}

void IdentificationSuccessMessage::_subscriptionEndDateFunc(CustomDataInput *input) {
    this->subscriptionEndDate = input->readDouble();
    if (this->subscriptionEndDate < 0 || this->subscriptionEndDate > 9007199254740990) {

    }
}

void IdentificationSuccessMessage::_havenbagAvailableRoomFunc(CustomDataInput *input) {
    this->havenbagAvailableRoom = input->readUnsignedByte();
    if (this->havenbagAvailableRoom < 0 || this->havenbagAvailableRoom > 255) {

    }
}
