#include "GuildFactsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildFactSheetInformations.h"

#include "../DofusTypes/CharacterMinimalGuildPublicInformations.h"

void GuildFactsMessage::deserialize(CustomDataInput *input) {
    CharacterMinimalGuildPublicInformations _item4;
    unsigned int _id1 = input->readUnsignedShort();
    this->infos = *dynamic_cast<GuildFactSheetInformations *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

    this->_creationDateFunc(input);
    this->_nbTaxCollectorsFunc(input);
    unsigned int _membersLen = input->readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _membersLen; _i4++) {
        _item4.deserialize(input);
        this->members.push_back(_item4);
    }
}

void GuildFactsMessage::_creationDateFunc(CustomDataInput *input) {
    this->creationDate = input->readInt();
    if (this->creationDate < 0) {

    }
}

void GuildFactsMessage::_nbTaxCollectorsFunc(CustomDataInput *input) {
    this->nbTaxCollectors = input->readVarUhShort();
    if (this->nbTaxCollectors < 0) {

    }
}
