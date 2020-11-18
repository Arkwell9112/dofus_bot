#include "JobBookSubscribeRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobBookSubscribeRequestMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _jobIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _jobIdsLen; _i1++) {
        _val1 = input->readByte();
        if (_val1 < 0) {

        }
        this->jobIds.push_back(_val1);
    }
}

void JobBookSubscribeRequestMessage::_jobIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readByte();
    if (_val < 0) {

    }
    this->jobIds.push_back(_val);
}
