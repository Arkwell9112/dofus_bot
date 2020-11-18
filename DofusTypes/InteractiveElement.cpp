#include "InteractiveElementSkill.h"
#include "InteractiveElement.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void InteractiveElement::deserialize(CustomDataInput *input) {
    unsigned int _id3 = 0;
    InteractiveElementSkill _item3;
    unsigned int _id4 = 0;
    InteractiveElementSkill _item4;
    this->_elementIdFunc(input);
    this->_elementTypeIdFunc(input);
    unsigned int _enabledSkillsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _enabledSkillsLen; _i3++) {
        _id3 = input->readUnsignedShort();
        _item3 = *dynamic_cast<InteractiveElementSkill *>(ProtocolTypeManager::getInstance(_id3, input));
        ProtocolTypeManager::deleteLastInstance();

        this->enabledSkills.push_back(_item3);
    }
    unsigned int _disabledSkillsLen = input->readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _disabledSkillsLen; _i4++) {
        _id4 = input->readUnsignedShort();
        _item4 = *dynamic_cast<InteractiveElementSkill *>(ProtocolTypeManager::getInstance(_id4, input));
        ProtocolTypeManager::deleteLastInstance();

        this->disabledSkills.push_back(_item4);
    }
    this->_onCurrentMapFunc(input);
}

void InteractiveElement::_elementIdFunc(CustomDataInput *input) {
    this->elementId = input->readInt();
    if (this->elementId < 0) {

    }
}

void InteractiveElement::_elementTypeIdFunc(CustomDataInput *input) {
    this->elementTypeId = input->readInt();
}

void InteractiveElement::_enabledSkillsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    InteractiveElementSkill _item;
    _item.deserialize(input);
    this->enabledSkills.push_back(_item);
}

void InteractiveElement::_disabledSkillsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    InteractiveElementSkill _item;
    _item.deserialize(input);
    this->disabledSkills.push_back(_item);
}

void InteractiveElement::_onCurrentMapFunc(CustomDataInput *input) {
    this->onCurrentMap = input->readBoolean();
}
