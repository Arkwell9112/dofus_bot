#include "QuestObjectiveInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void QuestObjectiveInformations::deserialize(CustomDataInput *input) {
    std::string _val3;
    this->_objectiveIdFunc(input);
    this->_objectiveStatusFunc(input);
    unsigned int _dialogParamsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _dialogParamsLen; _i3++) {
        _val3 = input->readUTF();
        this->dialogParams.push_back(_val3);
    }
}

void QuestObjectiveInformations::_objectiveIdFunc(CustomDataInput *input) {
    this->objectiveId = input->readVarUhShort();
    if (this->objectiveId < 0) {

    }
}

void QuestObjectiveInformations::_objectiveStatusFunc(CustomDataInput *input) {
    this->objectiveStatus = input->readBoolean();
}

void QuestObjectiveInformations::_dialogParamsFunc(CustomDataInput *input) {
    std::string _val;
    this->dialogParams.push_back(_val);
}
