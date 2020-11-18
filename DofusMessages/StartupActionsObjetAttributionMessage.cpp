#include "StartupActionsObjetAttributionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StartupActionsObjetAttributionMessage::deserialize(CustomDataInput *input) {
    this->_actionIdFunc(input);
    this->_characterIdFunc(input);
}

void StartupActionsObjetAttributionMessage::_actionIdFunc(CustomDataInput *input) {
    this->actionId = input->readInt();
    if (this->actionId < 0) {

    }
}

void StartupActionsObjetAttributionMessage::_characterIdFunc(CustomDataInput *input) {
    this->characterId = input->readVarUhLong();
    if (this->characterId < 0 || this->characterId > 9007199254740990) {

    }
}
