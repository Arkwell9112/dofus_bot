#include "NpcGenericActionRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void NpcGenericActionRequestMessage::deserialize(CustomDataInput *input) {
    this->_npcIdFunc(input);
    this->_npcActionIdFunc(input);
    this->_npcMapIdFunc(input);
}

void NpcGenericActionRequestMessage::_npcIdFunc(CustomDataInput *input) {
    this->npcId = input->readInt();
}

void NpcGenericActionRequestMessage::_npcActionIdFunc(CustomDataInput *input) {
    this->npcActionId = input->readByte();
    if (this->npcActionId < 0) {

    }
}

void NpcGenericActionRequestMessage::_npcMapIdFunc(CustomDataInput *input) {
    this->npcMapId = input->readDouble();
    if (this->npcMapId < 0 || this->npcMapId > 9007199254740990) {

    }
}
