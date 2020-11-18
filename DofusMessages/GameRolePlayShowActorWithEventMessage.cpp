#include "GameRolePlayShowActorWithEventMessage.h"
#include "GameRolePlayShowActorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayShowActorWithEventMessage::deserialize(CustomDataInput *input) {
    GameRolePlayShowActorMessage::deserialize(input);
    this->_actorEventIdFunc(input);
}

void GameRolePlayShowActorWithEventMessage::_actorEventIdFunc(CustomDataInput *input) {
    this->actorEventId = input->readByte();
    if (this->actorEventId < 0) {

    }
}
