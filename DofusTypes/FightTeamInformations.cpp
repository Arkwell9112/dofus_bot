#include "FightTeamMemberInformations.h"
#include "FightTeamInformations.h"
#include "AbstractFightTeamInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightTeamInformations::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    FightTeamMemberInformations _item1;
    AbstractFightTeamInformations::deserialize(input);
    unsigned int _teamMembersLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _teamMembersLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<FightTeamMemberInformations *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->teamMembers.push_back(_item1);
    }
}

void FightTeamInformations::_teamMembersFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    FightTeamMemberInformations _item;
    _item.deserialize(input);
    this->teamMembers.push_back(_item);
}
