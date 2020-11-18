#include "GameRolePlayNpcQuestFlag.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayNpcQuestFlag::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _questsToValidIdLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _questsToValidIdLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0) {

        }
        this->questsToValidId.push_back(_val1);
    }
    unsigned int _questsToStartIdLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _questsToStartIdLen; _i2++) {
        _val2 = input->readVarUhShort();
        if (_val2 < 0) {

        }
        this->questsToStartId.push_back(_val2);
    }
}

void GameRolePlayNpcQuestFlag::_questsToValidIdFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->questsToValidId.push_back(_val);
}

void GameRolePlayNpcQuestFlag::_questsToStartIdFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->questsToStartId.push_back(_val);
}
