#include "PartyLocateMembersMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PartyMemberGeoPosition.h"

void PartyLocateMembersMessage::deserialize(CustomDataInput *input) {
    PartyMemberGeoPosition _item1;
    AbstractPartyMessage::deserialize(input);
    unsigned int _geopositionsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _geopositionsLen; _i1++) {
        _item1.deserialize(input);
        this->geopositions.push_back(_item1);
    }
}