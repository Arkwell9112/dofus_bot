#include "CharacterExperienceGainMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterExperienceGainMessage::deserialize(CustomDataInput *input) {
    this->_experienceCharacterFunc(input);
    this->_experienceMountFunc(input);
    this->_experienceGuildFunc(input);
    this->_experienceIncarnationFunc(input);
}

void CharacterExperienceGainMessage::_experienceCharacterFunc(CustomDataInput *input) {
    this->experienceCharacter = input->readVarUhLong();
    if (this->experienceCharacter < 0 || this->experienceCharacter > 9007199254740990) {

    }
}

void CharacterExperienceGainMessage::_experienceMountFunc(CustomDataInput *input) {
    this->experienceMount = input->readVarUhLong();
    if (this->experienceMount < 0 || this->experienceMount > 9007199254740990) {

    }
}

void CharacterExperienceGainMessage::_experienceGuildFunc(CustomDataInput *input) {
    this->experienceGuild = input->readVarUhLong();
    if (this->experienceGuild < 0 || this->experienceGuild > 9007199254740990) {

    }
}

void CharacterExperienceGainMessage::_experienceIncarnationFunc(CustomDataInput *input) {
    this->experienceIncarnation = input->readVarUhLong();
    if (this->experienceIncarnation < 0 || this->experienceIncarnation > 9007199254740990) {

    }
}
