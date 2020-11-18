#include "StartupActionsListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/StartupActionAddObject.h"

void StartupActionsListMessage::deserialize(CustomDataInput *input) {
    StartupActionAddObject _item1;
    unsigned int _actionsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _actionsLen; _i1++) {
        _item1.deserialize(input);
        this->actions.push_back(_item1);
    }
}