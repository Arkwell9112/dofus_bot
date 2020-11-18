#include "CinematicMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CinematicMessage::deserialize(CustomDataInput *input) {
    this->_cinematicIdFunc(input);
}

void CinematicMessage::_cinematicIdFunc(CustomDataInput *input) {
    this->cinematicId = input->readVarUhShort();
    if (this->cinematicId < 0) {

    }
}
