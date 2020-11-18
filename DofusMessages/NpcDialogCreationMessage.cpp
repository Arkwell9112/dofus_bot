#include "NpcDialogCreationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void NpcDialogCreationMessage::deserialize(CustomDataInput *input) {
    this->_mapIdFunc(input);
    this->_npcIdFunc(input);
}

void NpcDialogCreationMessage::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void NpcDialogCreationMessage::_npcIdFunc(CustomDataInput *input) {
    this->npcId = input->readInt();
}
