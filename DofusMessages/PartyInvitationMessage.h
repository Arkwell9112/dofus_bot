#ifndef PARTYINVITATIONMESSAGE_H
#define PARTYINVITATIONMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyInvitationMessage : public AbstractPartyMessage {
public:
    unsigned int partyType = 0;
    std::string partyName;
    unsigned int maxParticipants = 0;
    double fromId = 0;
    std::string fromName;
    double toId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _partyTypeFunc(CustomDataInput *input);

    void _partyNameFunc(CustomDataInput *input);

    void _maxParticipantsFunc(CustomDataInput *input);

    void _fromIdFunc(CustomDataInput *input);

    void _fromNameFunc(CustomDataInput *input);

    void _toIdFunc(CustomDataInput *input);
};

#endif