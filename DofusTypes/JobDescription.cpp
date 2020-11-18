#include "SkillActionDescription.h"
#include "JobDescription.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobDescription::deserialize(CustomDataInput *input) {
    unsigned int _id2 = 0;
    SkillActionDescription _item2;
    this->_jobIdFunc(input);
    unsigned int _skillsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _skillsLen; _i2++) {
        _id2 = input->readUnsignedShort();
        _item2 = *dynamic_cast<SkillActionDescription *>(ProtocolTypeManager::getInstance(_id2, input));
        ProtocolTypeManager::deleteLastInstance();

        this->skills.push_back(_item2);
    }
}

void JobDescription::_jobIdFunc(CustomDataInput *input) {
    this->jobId = input->readByte();
    if (this->jobId < 0) {

    }
}

void JobDescription::_skillsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    SkillActionDescription _item;
    _item.deserialize(input);
    this->skills.push_back(_item);
}
