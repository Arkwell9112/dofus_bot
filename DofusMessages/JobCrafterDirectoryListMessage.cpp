#include "JobCrafterDirectoryListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobCrafterDirectoryListEntry.h"

void JobCrafterDirectoryListMessage::deserialize(CustomDataInput *input) {
    JobCrafterDirectoryListEntry _item1;
    unsigned int _listEntriesLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _listEntriesLen; _i1++) {
        _item1.deserialize(input);
        this->listEntries.push_back(_item1);
    }
}