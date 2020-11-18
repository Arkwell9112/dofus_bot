#include "JobExperienceUpdateMessage.h"
#include "JobExperienceOtherPlayerUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobExperience.h"

void JobExperienceOtherPlayerUpdateMessage::deserialize(CustomDataInput *input) {
    JobExperienceUpdateMessage::deserialize(input);
    this->_playerIdFunc(input);
}

void JobExperienceOtherPlayerUpdateMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}
