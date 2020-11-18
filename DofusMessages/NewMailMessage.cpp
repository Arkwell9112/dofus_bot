#include "NewMailMessage.h"
#include "MailStatusMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void NewMailMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    MailStatusMessage::deserialize(input);
    unsigned int _sendersAccountIdLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _sendersAccountIdLen; _i1++) {
        _val1 = input->readInt();
        if (_val1 < 0) {

        }
        this->sendersAccountId.push_back(_val1);
    }
}

void NewMailMessage::_sendersAccountIdFunc(CustomDataInput *input) {
    unsigned int _val = input->readInt();
    if (_val < 0) {

    }
    this->sendersAccountId.push_back(_val);
}
