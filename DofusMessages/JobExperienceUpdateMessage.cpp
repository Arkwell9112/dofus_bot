#include "JobExperienceUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobExperience.h"

void JobExperienceUpdateMessage::deserialize(CustomDataInput *input) {
    this->experiencesUpdate.deserialize(input);
}