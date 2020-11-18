#include "ServerSettingsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ServerSettingsMessage::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
    this->_langFunc(input);
    this->_communityFunc(input);
    this->_gameTypeFunc(input);
    this->_arenaLeaveBanTimeFunc(input);
    this->_itemMaxLevelFunc(input);
}

void ServerSettingsMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->isMonoAccount = BooleanByteWrapper::getFlag(_box0, 0);
    this->hasFreeAutopilot = BooleanByteWrapper::getFlag(_box0, 1);
}

void ServerSettingsMessage::_langFunc(CustomDataInput *input) {
    this->lang = input->readUTF();
}

void ServerSettingsMessage::_communityFunc(CustomDataInput *input) {
    this->community = input->readByte();
    if (this->community < 0) {

    }
}

void ServerSettingsMessage::_gameTypeFunc(CustomDataInput *input) {
    this->gameType = input->readByte();
}

void ServerSettingsMessage::_arenaLeaveBanTimeFunc(CustomDataInput *input) {
    this->arenaLeaveBanTime = input->readVarUhShort();
    if (this->arenaLeaveBanTime < 0) {

    }
}

void ServerSettingsMessage::_itemMaxLevelFunc(CustomDataInput *input) {
    this->itemMaxLevel = input->readInt();
    if (this->itemMaxLevel < 0) {

    }
}
