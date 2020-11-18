#include "JobCrafterDirectoryEntryMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobCrafterDirectoryEntryJobInfo.h"

void JobCrafterDirectoryEntryMessage::deserialize(CustomDataInput *input) {
    JobCrafterDirectoryEntryJobInfo _item2;
    this->playerInfo.deserialize(input);
    unsigned int _jobInfoListLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _jobInfoListLen; _i2++) {
        _item2.deserialize(input);
        this->jobInfoList.push_back(_item2);
    }
    this->playerLook.deserialize(input);
}