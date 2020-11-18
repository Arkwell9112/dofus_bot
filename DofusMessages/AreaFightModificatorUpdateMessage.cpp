#include "AreaFightModificatorUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AreaFightModificatorUpdateMessage::deserialize(CustomDataInput *input) {
    this->_spellPairIdFunc(input);
}

void AreaFightModificatorUpdateMessage::_spellPairIdFunc(CustomDataInput *input) {
    this->spellPairId = input->readInt();
}
