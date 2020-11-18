#include "PortalDialogCreationMessage.h"
#include "NpcDialogCreationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PortalDialogCreationMessage::deserialize(CustomDataInput *input) {
    NpcDialogCreationMessage::deserialize(input);
    this->_typeFunc(input);
}

void PortalDialogCreationMessage::_typeFunc(CustomDataInput *input) {
    this->type = input->readInt();
    if (this->type < 0) {

    }
}
