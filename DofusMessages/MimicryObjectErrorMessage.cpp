#include "SymbioticObjectErrorMessage.h"
#include "ObjectErrorMessage.h"
#include "MimicryObjectErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MimicryObjectErrorMessage::deserialize(CustomDataInput *input) {
    SymbioticObjectErrorMessage::deserialize(input);
    this->_previewFunc(input);
}

void MimicryObjectErrorMessage::_previewFunc(CustomDataInput *input) {
    this->preview = input->readBoolean();
}
