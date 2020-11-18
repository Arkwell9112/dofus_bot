#include "ServerExperienceModificatorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ServerExperienceModificatorMessage::deserialize(CustomDataInput *input) {
    this->_experiencePercentFunc(input);
}

void ServerExperienceModificatorMessage::_experiencePercentFunc(CustomDataInput *input) {
    this->experiencePercent = input->readVarUhShort();
    if (this->experiencePercent < 0) {

    }
}
