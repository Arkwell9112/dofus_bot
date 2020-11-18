#include "ShowCellSpectatorMessage.h"
#include "ShowCellMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ShowCellSpectatorMessage::deserialize(CustomDataInput *input) {
    ShowCellMessage::deserialize(input);
    this->_playerNameFunc(input);
}

void ShowCellSpectatorMessage::_playerNameFunc(CustomDataInput *input) {
    this->playerName = input->readUTF();
}
