#include "PartyIdol.h"
#include "Idol.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyIdol::deserialize(CustomDataInput *input) {
    double _val1 = 0;
    Idol::deserialize(input);
    unsigned int _ownersIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _ownersIdsLen; _i1++) {
        _val1 = input->readVarUhLong();
        if (_val1 < 0 || _val1 > 9007199254740990) {

        }
        this->ownersIds.push_back(_val1);
    }
}

void PartyIdol::_ownersIdsFunc(CustomDataInput *input) {
    double _val = input->readVarUhLong();
    if (_val < 0 || _val > 9007199254740990) {

    }
    this->ownersIds.push_back(_val);
}
