#include "GameActionFightTackledMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightTackledMessage::deserialize(CustomDataInput *input) {
    double _val1 = 0;
    AbstractGameActionMessage::deserialize(input);
    unsigned int _tacklersIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _tacklersIdsLen; _i1++) {
        _val1 = input->readDouble();
        if (_val1 < -9007199254740990 || _val1 > 9007199254740990) {

        }
        this->tacklersIds.push_back(_val1);
    }
}

void GameActionFightTackledMessage::_tacklersIdsFunc(CustomDataInput *input) {
    double _val = input->readDouble();
    if (_val < -9007199254740990 || _val > 9007199254740990) {

    }
    this->tacklersIds.push_back(_val);
}
