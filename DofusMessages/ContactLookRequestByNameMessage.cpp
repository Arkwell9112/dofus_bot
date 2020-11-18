#include "ContactLookRequestMessage.h"
#include "ContactLookRequestByNameMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ContactLookRequestByNameMessage::deserialize(CustomDataInput *input) {
    ContactLookRequestMessage::deserialize(input);
    this->_playerNameFunc(input);
}

void ContactLookRequestByNameMessage::_playerNameFunc(CustomDataInput *input) {
    this->playerName = input->readUTF();
}
