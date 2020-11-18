#include "AchievementListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AchievementAchieved.h"

#include "../DofusTypes/Achievement.h"

void AchievementListMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    AchievementAchieved _item1;
    unsigned int _finishedAchievementsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _finishedAchievementsLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<AchievementAchieved *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->finishedAchievements.push_back(_item1);
    }
}

void AchievementListMessage::_finishedAchievementsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    AchievementAchieved _item;
    _item.deserialize(input);
    this->finishedAchievements.push_back(_item);
}
