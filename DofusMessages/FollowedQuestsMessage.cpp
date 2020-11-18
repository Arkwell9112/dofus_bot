#include "FollowedQuestsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/QuestActiveDetailedInformations.h"

void FollowedQuestsMessage::deserialize(CustomDataInput *input) {
    QuestActiveDetailedInformations _item1;
    unsigned int _questsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _questsLen; _i1++) {
        _item1.deserialize(input);
        this->quests.push_back(_item1);
    }
}