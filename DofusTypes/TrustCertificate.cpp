#include "TrustCertificate.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TrustCertificate::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_hashFunc(input);
}

void TrustCertificate::_idFunc(CustomDataInput *input) {
    this->id = input->readInt();
    if (this->id < 0) {

    }
}

void TrustCertificate::_hashFunc(CustomDataInput *input) {
    this->hash = input->readUTF();
}
