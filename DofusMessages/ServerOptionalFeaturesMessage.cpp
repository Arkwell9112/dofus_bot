#include "ServerOptionalFeaturesMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ServerOptionalFeaturesMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _featuresLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _featuresLen; _i1++) {
        _val1 = input->readByte();
        if (_val1 < 0) {

        }
        this->features.push_back(_val1);
    }
}

void ServerOptionalFeaturesMessage::_featuresFunc(CustomDataInput *input) {
    unsigned int _val = input->readByte();
    if (_val < 0) {

    }
    this->features.push_back(_val);
}
