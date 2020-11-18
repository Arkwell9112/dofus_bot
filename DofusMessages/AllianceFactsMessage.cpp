#include "AllianceFactsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildInAllianceInformations.h"

#include "../DofusTypes/AllianceInformations.h"

#include "../DofusTypes/AllianceFactSheetInformations.h"

void AllianceFactsMessage::deserialize(CustomDataInput *input) {
    GuildInAllianceInformations _item2;
    unsigned int _val3 = 0;
    unsigned int _id1 = input->readUnsignedShort();
    this->infos = *dynamic_cast<AllianceFactSheetInformations *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

    unsigned int _guildsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _guildsLen; _i2++) {
        _item2.deserialize(input);
        this->guilds.push_back(_item2);
    }
    unsigned int _controlledSubareaIdsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _controlledSubareaIdsLen; _i3++) {
        _val3 = input->readVarUhShort();
        if (_val3 < 0) {

        }
        this->controlledSubareaIds.push_back(_val3);
    }
    this->_leaderCharacterIdFunc(input);
    this->_leaderCharacterNameFunc(input);
}

void AllianceFactsMessage::_controlledSubareaIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->controlledSubareaIds.push_back(_val);
}

void AllianceFactsMessage::_leaderCharacterIdFunc(CustomDataInput *input) {
    this->leaderCharacterId = input->readVarUhLong();
    if (this->leaderCharacterId < 0 || this->leaderCharacterId > 9007199254740990) {

    }
}

void AllianceFactsMessage::_leaderCharacterNameFunc(CustomDataInput *input) {
    this->leaderCharacterName = input->readUTF();
}
