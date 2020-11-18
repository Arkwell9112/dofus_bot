#ifndef PARTYINVITATIONMEMBERINFORMATIONS_H
#define PARTYINVITATIONMEMBERINFORMATIONS_H

#include "PartyEntityBaseInformation.h"
#include "CharacterBaseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyInvitationMemberInformations : public CharacterBaseInformations {
public:
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    std::vector<PartyEntityBaseInformation> entities;

    void deserialize(CustomDataInput *input);

private:
    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _mapIdFunc(CustomDataInput *input);

    void _subAreaIdFunc(CustomDataInput *input);
};

#endif