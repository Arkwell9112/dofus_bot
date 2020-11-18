#include "GuildListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildInformations.h"

void GuildListMessage::deserialize(CustomDataInput *input) {
    GuildInformations _item1;
    unsigned int _guildsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _guildsLen; _i1++) {
        _item1.deserialize(input);
        this->guilds.push_back(_item1);
    }
}