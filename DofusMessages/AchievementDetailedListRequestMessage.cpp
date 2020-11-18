#include "AchievementDetailedListRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

void AchievementDetailedListRequestMessage::deserialize(CustomDataInput *input) {
    this->_categoryIdFunc(input);
}

void AchievementDetailedListRequestMessage::_categoryIdFunc(CustomDataInput *input) {
    this->categoryId = input->readVarUhShort();
    if (this->categoryId < 0) {

    }
}
