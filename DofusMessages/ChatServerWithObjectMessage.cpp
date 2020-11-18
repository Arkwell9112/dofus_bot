#include "ChatServerWithObjectMessage.h"
#include "ChatServerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

void ChatServerWithObjectMessage::deserialize(CustomDataInput *input) {
    ObjectItem _item1;
    ChatServerMessage::deserialize(input);
    unsigned int _objectsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectsLen; _i1++) {
        _item1.deserialize(input);
        this->objects.push_back(_item1);
    }
}