#ifndef PARTYINVITATIONDUNGEONDETAILSMESSAGE_H
#define PARTYINVITATIONDUNGEONDETAILSMESSAGE_H

#include "PartyInvitationDetailsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyInvitationDungeonDetailsMessage : public PartyInvitationDetailsMessage {
public:
    unsigned int dungeonId = 0;
    std::vector<bool> playersDungeonReady;

    void deserialize(CustomDataInput *input);

private:
    void _dungeonIdFunc(CustomDataInput *input);

    void _playersDungeonReadyFunc(CustomDataInput *input);
};

#endif