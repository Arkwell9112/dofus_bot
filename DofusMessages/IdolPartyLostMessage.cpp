#include "IdolPartyLostMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Idol.h"

void IdolPartyLostMessage::deserialize(CustomDataInput *input) {
    this->_idolIdFunc(input);
}

void IdolPartyLostMessage::_idolIdFunc(CustomDataInput *input) {
    this->idolId = input->readVarUhShort();
    if (this->idolId < 0) {

    }
}
