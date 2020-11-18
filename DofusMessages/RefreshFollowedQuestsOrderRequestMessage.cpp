#include "RefreshFollowedQuestsOrderRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void RefreshFollowedQuestsOrderRequestMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _questsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _questsLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0) {

        }
        this->quests.push_back(_val1);
    }
}

void RefreshFollowedQuestsOrderRequestMessage::_questsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->quests.push_back(_val);
}
