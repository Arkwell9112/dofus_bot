#include "BasicAllianceInformations.h"
#include "AllianceInformations.h"
#include "AbstractSocialGroupInfos.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BasicAllianceInformations::deserialize(CustomDataInput *input) {
    AbstractSocialGroupInfos::deserialize(input);
    this->_allianceIdFunc(input);
    this->_allianceTagFunc(input);
}

void BasicAllianceInformations::_allianceIdFunc(CustomDataInput *input) {
    this->allianceId = input->readVarUhInt();
    if (this->allianceId < 0) {

    }
}

void BasicAllianceInformations::_allianceTagFunc(CustomDataInput *input) {
    this->allianceTag = input->readUTF();
}
