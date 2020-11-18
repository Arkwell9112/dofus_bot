#include "JobMultiCraftAvailableSkillsMessage.h"
#include "JobAllowMultiCraftRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobMultiCraftAvailableSkillsMessage::deserialize(CustomDataInput *input) {
    unsigned int _val2 = 0;
    JobAllowMultiCraftRequestMessage::deserialize(input);
    this->_playerIdFunc(input);
    unsigned int _skillsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _skillsLen; _i2++) {
        _val2 = input->readVarUhShort();
        if (_val2 < 0) {

        }
        this->skills.push_back(_val2);
    }
}

void JobMultiCraftAvailableSkillsMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}

void JobMultiCraftAvailableSkillsMessage::_skillsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->skills.push_back(_val);
}
