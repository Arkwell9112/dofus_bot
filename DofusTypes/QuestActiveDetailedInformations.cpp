#include "QuestObjectiveInformations.h"
#include "QuestActiveInformations.h"
#include "QuestActiveDetailedInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void QuestActiveDetailedInformations::deserialize(CustomDataInput *input) {
    unsigned int _id2 = 0;
    QuestObjectiveInformations _item2;
    QuestActiveInformations::deserialize(input);
    this->_stepIdFunc(input);
    unsigned int _objectivesLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _objectivesLen; _i2++) {
        _id2 = input->readUnsignedShort();
        _item2 = *dynamic_cast<QuestObjectiveInformations *>(ProtocolTypeManager::getInstance(_id2, input));
        ProtocolTypeManager::deleteLastInstance();

        this->objectives.push_back(_item2);
    }
}

void QuestActiveDetailedInformations::_stepIdFunc(CustomDataInput *input) {
    this->stepId = input->readVarUhShort();
    if (this->stepId < 0) {

    }
}

void QuestActiveDetailedInformations::_objectivesFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    QuestObjectiveInformations _item;
    _item.deserialize(input);
    this->objectives.push_back(_item);
}
