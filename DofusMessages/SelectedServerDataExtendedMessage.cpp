#include "SelectedServerDataMessage.h"
#include "SelectedServerDataExtendedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameServerInformations.h"

void SelectedServerDataExtendedMessage::deserialize(CustomDataInput *input) {
    GameServerInformations _item1;
    SelectedServerDataMessage::deserialize(input);
    unsigned int _serversLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _serversLen; _i1++) {
        _item1.deserialize(input);
        this->servers.push_back(_item1);
    }
}