#include "GameActionFightDispellMessage.h"
#include "GameActionFightDispellEffectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightDispellEffectMessage::deserialize(CustomDataInput *input) {
    GameActionFightDispellMessage::deserialize(input);
    this->_boostUIDFunc(input);
}

void GameActionFightDispellEffectMessage::_boostUIDFunc(CustomDataInput *input) {
    this->boostUID = input->readInt();
    if (this->boostUID < 0) {

    }
}
