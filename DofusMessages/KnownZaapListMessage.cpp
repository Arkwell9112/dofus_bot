#include "KnownZaapListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void KnownZaapListMessage::deserialize(CustomDataInput *input) {
    double _val1 = 0;
    unsigned int _destinationsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _destinationsLen; _i1++) {
        _val1 = input->readDouble();
        if (_val1 < 0 || _val1 > 9007199254740990) {

        }
        this->destinations.push_back(_val1);
    }
}

void KnownZaapListMessage::_destinationsFunc(CustomDataInput *input) {
    double _val = input->readDouble();
    if (_val < 0 || _val > 9007199254740990) {

    }
    this->destinations.push_back(_val);
}
