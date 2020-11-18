#include "GuildInformationsMembersMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildMember.h"

#include "../DofusTypes/GuildInformations.h"

void GuildInformationsMembersMessage::deserialize(CustomDataInput *input) {
    GuildMember _item1;
    unsigned int _membersLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _membersLen; _i1++) {
        _item1.deserialize(input);
        this->members.push_back(_item1);
    }
}