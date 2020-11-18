#include "ClientUIOpenedMessage.h"
#include "ClientUIOpenedByObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ClientUIOpenedByObjectMessage::deserialize(CustomDataInput *input) {
    ClientUIOpenedMessage::deserialize(input);
    this->_uidFunc(input);
}

void ClientUIOpenedByObjectMessage::_uidFunc(CustomDataInput *input) {
    this->uid = input->readVarUhInt();
    if (this->uid < 0) {

    }
}
