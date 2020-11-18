#include "EnterHavenBagRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void EnterHavenBagRequestMessage::deserialize(CustomDataInput *input) {
    this->_havenBagOwnerFunc(input);
}

void EnterHavenBagRequestMessage::_havenBagOwnerFunc(CustomDataInput *input) {
    this->havenBagOwner = input->readVarUhLong();
    if (this->havenBagOwner < 0 || this->havenBagOwner > 9007199254740990) {

    }
}
