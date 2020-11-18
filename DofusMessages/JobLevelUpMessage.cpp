#include "JobLevelUpMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobLevelUpMessage::deserialize(CustomDataInput *input) {
    this->jobsDescription.deserialize(input);
}