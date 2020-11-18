#include "HouseOnMapInformations.h"
#include "HouseInstanceInformations.h"
#include "HouseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseOnMapInformations::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    HouseInstanceInformations _item2;
    HouseInformations::deserialize(input);
    unsigned int _doorsOnMapLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _doorsOnMapLen; _i1++) {
        _val1 = input->readInt();
        if (_val1 < 0) {

        }
        this->doorsOnMap.push_back(_val1);
    }
    unsigned int _houseInstancesLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _houseInstancesLen; _i2++) {
        _item2.deserialize(input);
        this->houseInstances.push_back(_item2);
    }
}

void HouseOnMapInformations::_doorsOnMapFunc(CustomDataInput *input) {
    unsigned int _val = input->readInt();
    if (_val < 0) {

    }
    this->doorsOnMap.push_back(_val);
}
