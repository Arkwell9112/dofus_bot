#include "StartupActionsAllAttributionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StartupActionsAllAttributionMessage::deserialize(CustomDataInput *input) {
    this->_characterIdFunc(input);
}

void StartupActionsAllAttributionMessage::_characterIdFunc(CustomDataInput *input) {
    this->characterId = input->readVarUhLong();
    if (this->characterId < 0 || this->characterId > 9007199254740990) {

    }
}
