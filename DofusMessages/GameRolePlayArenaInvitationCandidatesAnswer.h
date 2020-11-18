#ifndef GAMEROLEPLAYARENAINVITATIONCANDIDATESANSWER_H
#define GAMEROLEPLAYARENAINVITATIONCANDIDATESANSWER_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/LeagueFriendInformations.h"

#include "../DofusTypes/FriendInformations.h"

#include <string>
#include <vector>

class GameRolePlayArenaInvitationCandidatesAnswer : public DeserializeInterface {
public:
    std::vector<LeagueFriendInformations> candidates;

    void deserialize(CustomDataInput *input);

private:
};

#endif