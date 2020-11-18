#include "MapRunningFightDetailsMessage.h"
#include "MapRunningFightDetailsExtendedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/NamedPartyTeam.h"

void MapRunningFightDetailsExtendedMessage::deserialize(CustomDataInput *input) {
    NamedPartyTeam _item1;
    MapRunningFightDetailsMessage::deserialize(input);
    unsigned int _namedPartyTeamsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _namedPartyTeamsLen; _i1++) {
        _item1.deserialize(input);
        this->namedPartyTeams.push_back(_item1);
    }
}