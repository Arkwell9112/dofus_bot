#include "BasicNamedAllianceInformations.h"
#include "BasicAllianceInformations.h"
#include "AllianceInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BasicNamedAllianceInformations::deserialize(CustomDataInput *input) {
    BasicAllianceInformations::deserialize(input);
    this->_allianceNameFunc(input);
}

void BasicNamedAllianceInformations::_allianceNameFunc(CustomDataInput *input) {
    this->allianceName = input->readUTF();
}
