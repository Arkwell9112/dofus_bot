#include "BreachTeleportResponseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachTeleportResponseMessage::deserialize(CustomDataInput *input) {
    this->_teleportedFunc(input);
}

void BreachTeleportResponseMessage::_teleportedFunc(CustomDataInput *input) {
    this->teleported = input->readBoolean();
}
