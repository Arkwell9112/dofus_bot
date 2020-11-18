#include "SymbioticObjectAssociateRequestMessage.h"
#include "MimicryObjectFeedAndAssociateRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MimicryObjectFeedAndAssociateRequestMessage::deserialize(CustomDataInput *input) {
    SymbioticObjectAssociateRequestMessage::deserialize(input);
    this->_foodUIDFunc(input);
    this->_foodPosFunc(input);
    this->_previewFunc(input);
}

void MimicryObjectFeedAndAssociateRequestMessage::_foodUIDFunc(CustomDataInput *input) {
    this->foodUID = input->readVarUhInt();
    if (this->foodUID < 0) {

    }
}

void MimicryObjectFeedAndAssociateRequestMessage::_foodPosFunc(CustomDataInput *input) {
    this->foodPos = input->readUnsignedByte();
    if (this->foodPos < 0 || this->foodPos > 255) {

    }
}

void MimicryObjectFeedAndAssociateRequestMessage::_previewFunc(CustomDataInput *input) {
    this->preview = input->readBoolean();
}
