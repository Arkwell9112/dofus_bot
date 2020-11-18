#include "JobCrafterDirectoryListEntry.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobCrafterDirectoryListEntry::deserialize(CustomDataInput *input) {
    this->playerInfo.deserialize(input);
    this->jobInfo.deserialize(input);
}