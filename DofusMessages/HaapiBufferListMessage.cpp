#include "HaapiBufferListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/BufferInformation.h"

void HaapiBufferListMessage::deserialize(CustomDataInput *input) {
    BufferInformation _item1;
    unsigned int _buffersLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _buffersLen; _i1++) {
        _item1.deserialize(input);
        this->buffers.push_back(_item1);
    }
}