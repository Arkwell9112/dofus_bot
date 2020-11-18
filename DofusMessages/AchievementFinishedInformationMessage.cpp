#include "AchievementFinishedMessage.h"
#include "AchievementFinishedInformationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

void AchievementFinishedInformationMessage::deserialize(CustomDataInput *input) {
    AchievementFinishedMessage::deserialize(input);
    this->_nameFunc(input);
    this->_playerIdFunc(input);
}

void AchievementFinishedInformationMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void AchievementFinishedInformationMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}
