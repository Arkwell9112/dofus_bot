#include "PrismInformation.h"
#include "ObjectItem.h"
#include "Item.h"
#include "AllianceInsiderPrismInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceInsiderPrismInformation::deserialize(CustomDataInput *input) {
    ObjectItem _item5;
    PrismInformation::deserialize(input);
    this->_lastTimeSlotModificationDateFunc(input);
    this->_lastTimeSlotModificationAuthorGuildIdFunc(input);
    this->_lastTimeSlotModificationAuthorIdFunc(input);
    this->_lastTimeSlotModificationAuthorNameFunc(input);
    unsigned int _modulesObjectsLen = input->readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _modulesObjectsLen; _i5++) {
        _item5.deserialize(input);
        this->modulesObjects.push_back(_item5);
    }
}

void AllianceInsiderPrismInformation::_lastTimeSlotModificationDateFunc(CustomDataInput *input) {
    this->lastTimeSlotModificationDate = input->readInt();
    if (this->lastTimeSlotModificationDate < 0) {

    }
}

void AllianceInsiderPrismInformation::_lastTimeSlotModificationAuthorGuildIdFunc(CustomDataInput *input) {
    this->lastTimeSlotModificationAuthorGuildId = input->readVarUhInt();
    if (this->lastTimeSlotModificationAuthorGuildId < 0) {

    }
}

void AllianceInsiderPrismInformation::_lastTimeSlotModificationAuthorIdFunc(CustomDataInput *input) {
    this->lastTimeSlotModificationAuthorId = input->readVarUhLong();
    if (this->lastTimeSlotModificationAuthorId < 0 || this->lastTimeSlotModificationAuthorId > 9007199254740990) {

    }
}

void AllianceInsiderPrismInformation::_lastTimeSlotModificationAuthorNameFunc(CustomDataInput *input) {
    this->lastTimeSlotModificationAuthorName = input->readUTF();
}
