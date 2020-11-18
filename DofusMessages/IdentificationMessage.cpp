#include "IdentificationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IdentificationMessage::deserialize(CustomDataInput *input) {
    int _val3 = 0;
    unsigned int _val9 = 0;
    this->deserializeByteBoxes(input);
    this->version.deserialize(input);
    this->_langFunc(input);
    unsigned int _credentialsLen = input->readVarInt();
    for (unsigned int _i3 = 0; _i3 < _credentialsLen; _i3++) {
        _val3 = input->readByte();
        this->credentials.push_back(_val3);
    }
    this->_serverIdFunc(input);
    this->_sessionOptionalSaltFunc(input);
    unsigned int _failedAttemptsLen = input->readUnsignedShort();
    for (unsigned int _i9 = 0; _i9 < _failedAttemptsLen; _i9++) {
        _val9 = input->readVarUhShort();
        if (_val9 < 0) {

        }
        this->failedAttempts.push_back(_val9);
    }
}

void IdentificationMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->autoconnect = BooleanByteWrapper::getFlag(_box0, 0);
    this->useCertificate = BooleanByteWrapper::getFlag(_box0, 1);
    this->useLoginToken = BooleanByteWrapper::getFlag(_box0, 2);
}

void IdentificationMessage::_langFunc(CustomDataInput *input) {
    this->lang = input->readUTF();
}

void IdentificationMessage::_credentialsFunc(CustomDataInput *input) {
    int _val = input->readByte();
    this->credentials.push_back(_val);
}

void IdentificationMessage::_serverIdFunc(CustomDataInput *input) {
    this->serverId = input->readShort();
}

void IdentificationMessage::_sessionOptionalSaltFunc(CustomDataInput *input) {
    this->sessionOptionalSalt = input->readVarLong();
    if (this->sessionOptionalSalt < -9007199254740990 || this->sessionOptionalSalt > 9007199254740990) {

    }
}

void IdentificationMessage::_failedAttemptsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->failedAttempts.push_back(_val);
}
