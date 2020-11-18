#ifndef GAMEROLEPLAYSHOWACTORWITHEVENTMESSAGE_H
#define GAMEROLEPLAYSHOWACTORWITHEVENTMESSAGE_H

#include "GameRolePlayShowActorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayShowActorWithEventMessage : public GameRolePlayShowActorMessage {
public:
    unsigned int actorEventId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _actorEventIdFunc(CustomDataInput *input);
};

#endif