#ifndef PARTYJOINMESSAGE_H
#define PARTYJOINMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PartyMemberInformations.h"

#include "../DofusTypes/PartyGuestInformations.h"

#include <string>
#include <vector>

class PartyJoinMessage : public AbstractPartyMessage {
public:
    unsigned int partyType = 0;
    double partyLeaderId = 0;
    unsigned int maxParticipants = 0;
    std::vector<PartyMemberInformations> members;
    std::vector<PartyGuestInformations> guests;
    bool restricted = false;
    std::string partyName;

    void deserialize(CustomDataInput *input);

private:
    void _partyTypeFunc(CustomDataInput *input);

    void _partyLeaderIdFunc(CustomDataInput *input);

    void _maxParticipantsFunc(CustomDataInput *input);

    void _membersFunc(CustomDataInput *input);

    void _restrictedFunc(CustomDataInput *input);

    void _partyNameFunc(CustomDataInput *input);
};

#endif