#include "GuildCharacsUpgradeRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildCharacsUpgradeRequestMessage::deserialize(CustomDataInput *input) {
    this->_charaTypeTargetFunc(input);
}

void GuildCharacsUpgradeRequestMessage::_charaTypeTargetFunc(CustomDataInput *input) {
    this->charaTypeTarget = input->readByte();
    if (this->charaTypeTarget < 0) {

    }
}
