#include "AllianceInsiderInfoMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PrismSubareaEmptyInfo.h"

#include "../DofusTypes/GuildInsiderFactSheetInformations.h"

void AllianceInsiderInfoMessage::deserialize(CustomDataInput *input) {
    GuildInsiderFactSheetInformations _item2;
    unsigned int _id3 = 0;
    PrismSubareaEmptyInfo _item3;
    this->allianceInfos.deserialize(input);
    unsigned int _guildsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _guildsLen; _i2++) {
        _item2.deserialize(input);
        this->guilds.push_back(_item2);
    }
    unsigned int _prismsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _prismsLen; _i3++) {
        _id3 = input->readUnsignedShort();
        _item3 = *dynamic_cast<PrismSubareaEmptyInfo *>(ProtocolTypeManager::getInstance(_id3, input));
        ProtocolTypeManager::deleteLastInstance();

        this->prisms.push_back(_item3);
    }
}

void AllianceInsiderInfoMessage::_prismsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    PrismSubareaEmptyInfo _item;
    _item.deserialize(input);
    this->prisms.push_back(_item);
}
