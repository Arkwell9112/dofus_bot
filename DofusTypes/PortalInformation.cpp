#include "PortalInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PortalInformation::deserialize(CustomDataInput *input) {
    this->_portalIdFunc(input);
    this->_areaIdFunc(input);
}

void PortalInformation::_portalIdFunc(CustomDataInput *input) {
    this->portalId = input->readInt();
}

void PortalInformation::_areaIdFunc(CustomDataInput *input) {
    this->areaId = input->readShort();
}
