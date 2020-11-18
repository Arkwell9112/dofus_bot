#include "EmotePlayMassiveMessage.h"
#include "EmotePlayAbstractMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void EmotePlayMassiveMessage::deserialize(CustomDataInput *input) {
    double _val1 = 0;
    EmotePlayAbstractMessage::deserialize(input);
    unsigned int _actorIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _actorIdsLen; _i1++) {
        _val1 = input->readDouble();
        if (_val1 < -9007199254740990 || _val1 > 9007199254740990) {

        }
        this->actorIds.push_back(_val1);
    }
}

void EmotePlayMassiveMessage::_actorIdsFunc(CustomDataInput *input) {
    double _val = input->readDouble();
    if (_val < -9007199254740990 || _val > 9007199254740990) {

    }
    this->actorIds.push_back(_val);
}
