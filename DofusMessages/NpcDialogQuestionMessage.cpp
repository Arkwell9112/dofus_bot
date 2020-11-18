#include "NpcDialogQuestionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void NpcDialogQuestionMessage::deserialize(CustomDataInput *input) {
    std::string _val2;
    unsigned int _val3 = 0;
    this->_messageIdFunc(input);
    unsigned int _dialogParamsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _dialogParamsLen; _i2++) {
        _val2 = input->readUTF();
        this->dialogParams.push_back(_val2);
    }
    unsigned int _visibleRepliesLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _visibleRepliesLen; _i3++) {
        _val3 = input->readVarUhInt();
        if (_val3 < 0) {

        }
        this->visibleReplies.push_back(_val3);
    }
}

void NpcDialogQuestionMessage::_messageIdFunc(CustomDataInput *input) {
    this->messageId = input->readVarUhInt();
    if (this->messageId < 0) {

    }
}

void NpcDialogQuestionMessage::_dialogParamsFunc(CustomDataInput *input) {
    std::string _val;
    this->dialogParams.push_back(_val);
}

void NpcDialogQuestionMessage::_visibleRepliesFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->visibleReplies.push_back(_val);
}
