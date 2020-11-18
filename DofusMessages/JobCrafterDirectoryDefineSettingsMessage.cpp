#include "JobCrafterDirectoryDefineSettingsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobCrafterDirectoryDefineSettingsMessage::deserialize(CustomDataInput *input) {
    this->settings.deserialize(input);
}