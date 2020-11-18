#include "QuestListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/QuestActiveInformations.h"

void QuestListMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _id3 = 0;
    QuestActiveInformations _item3;
    unsigned int _val4 = 0;
    unsigned int _finishedQuestsIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _finishedQuestsIdsLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0) {

        }
        this->finishedQuestsIds.push_back(_val1);
    }
    unsigned int _finishedQuestsCountsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _finishedQuestsCountsLen; _i2++) {
        _val2 = input->readVarUhShort();
        if (_val2 < 0) {

        }
        this->finishedQuestsCounts.push_back(_val2);
    }
    unsigned int _activeQuestsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _activeQuestsLen; _i3++) {
        _id3 = input->readUnsignedShort();
        _item3 = *dynamic_cast<QuestActiveInformations *>(ProtocolTypeManager::getInstance(_id3, input));
        ProtocolTypeManager::deleteLastInstance();

        this->activeQuests.push_back(_item3);
    }
    unsigned int _reinitDoneQuestsIdsLen = input->readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _reinitDoneQuestsIdsLen; _i4++) {
        _val4 = input->readVarUhShort();
        if (_val4 < 0) {

        }
        this->reinitDoneQuestsIds.push_back(_val4);
    }
}

void QuestListMessage::_finishedQuestsIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->finishedQuestsIds.push_back(_val);
}

void QuestListMessage::_finishedQuestsCountsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->finishedQuestsCounts.push_back(_val);
}

void QuestListMessage::_activeQuestsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    QuestActiveInformations _item;
    _item.deserialize(input);
    this->activeQuests.push_back(_item);
}

void QuestListMessage::_reinitDoneQuestsIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->reinitDoneQuestsIds.push_back(_val);
}
