#ifndef PARTYLOCATEMEMBERSMESSAGE_H
#define PARTYLOCATEMEMBERSMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PartyMemberGeoPosition.h"

#include <string>
#include <vector>

class PartyLocateMembersMessage : public AbstractPartyMessage {
public:
    std::vector<PartyMemberGeoPosition> geopositions;

    void deserialize(CustomDataInput *input);

private:
};

#endif