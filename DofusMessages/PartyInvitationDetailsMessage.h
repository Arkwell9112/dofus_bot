#ifndef PARTYINVITATIONDETAILSMESSAGE_H
#define PARTYINVITATIONDETAILSMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PartyInvitationMemberInformations.h"

#include "../DofusTypes/PartyGuestInformations.h"

#include <string>
#include <vector>

class PartyInvitationDetailsMessage : public AbstractPartyMessage {
public:
    unsigned int partyType = 0;
    std::string partyName;
    double fromId = 0;
    std::string fromName;
    double leaderId = 0;
    std::vector<PartyInvitationMemberInformations> members;
    std::vector<PartyGuestInformations> guests;

    void deserialize(CustomDataInput *input);

private:
    void _partyTypeFunc(CustomDataInput *input);

    void _partyNameFunc(CustomDataInput *input);

    void _fromIdFunc(CustomDataInput *input);

    void _fromNameFunc(CustomDataInput *input);

    void _leaderIdFunc(CustomDataInput *input);

    void _membersFunc(CustomDataInput *input);
};

#endif