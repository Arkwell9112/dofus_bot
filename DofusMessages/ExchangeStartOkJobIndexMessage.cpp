#include "ExchangeStartOkJobIndexMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeStartOkJobIndexMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _jobsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _jobsLen; _i1++) {
        _val1 = input->readVarUhInt();
        if (_val1 < 0) {

        }
        this->jobs.push_back(_val1);
    }
}

void ExchangeStartOkJobIndexMessage::_jobsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->jobs.push_back(_val);
}
