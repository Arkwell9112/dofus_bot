#include "JobCrafterDirectorySettingsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobCrafterDirectorySettings.h"

void JobCrafterDirectorySettingsMessage::deserialize(CustomDataInput *input) {
    JobCrafterDirectorySettings _item1;
    unsigned int _craftersSettingsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _craftersSettingsLen; _i1++) {
        _item1.deserialize(input);
        this->craftersSettings.push_back(_item1);
    }
}