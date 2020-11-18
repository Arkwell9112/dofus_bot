#include "GameRolePlayArenaInvitationCandidatesAnswer.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/LeagueFriendInformations.h"

#include "../DofusTypes/FriendInformations.h"

void GameRolePlayArenaInvitationCandidatesAnswer::deserialize(CustomDataInput *input) {
    LeagueFriendInformations _item1;
    unsigned int _candidatesLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _candidatesLen; _i1++) {
        _item1.deserialize(input);
        this->candidates.push_back(_item1);
    }
}