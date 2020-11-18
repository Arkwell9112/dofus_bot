#include "ServerSessionConstantsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ServerSessionConstant.h"

void ServerSessionConstantsMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    ServerSessionConstant _item1;
    unsigned int _variablesLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _variablesLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<ServerSessionConstant *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->variables.push_back(_item1);
    }
}

void ServerSessionConstantsMessage::_variablesFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    ServerSessionConstant _item;
    _item.deserialize(input);
    this->variables.push_back(_item);
}
