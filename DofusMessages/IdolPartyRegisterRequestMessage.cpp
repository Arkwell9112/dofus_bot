#include "IdolPartyRegisterRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Idol.h"

void IdolPartyRegisterRequestMessage::deserialize(CustomDataInput *input) {
    this->_registerFunc(input);
}

void IdolPartyRegisterRequestMessage::_registerFunc(CustomDataInput *input) {
    this->register0 = input->readBoolean();
}
