#include "GuildVersatileInfoListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildVersatileInformations.h"

void GuildVersatileInfoListMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    GuildVersatileInformations _item1;
    unsigned int _guildsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _guildsLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<GuildVersatileInformations *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->guilds.push_back(_item1);
    }
}

void GuildVersatileInfoListMessage::_guildsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    GuildVersatileInformations _item;
    _item.deserialize(input);
    this->guilds.push_back(_item);
}
