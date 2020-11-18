#include "AbstractGameActionWithAckMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AbstractGameActionWithAckMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_waitAckIdFunc(input);
}

void AbstractGameActionWithAckMessage::_waitAckIdFunc(CustomDataInput *input) {
    this->waitAckId = input->readShort();
}
