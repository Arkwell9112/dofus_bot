#include "AllianceInformations.h"
#include "AllianceFactSheetInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceFactSheetInformations::deserialize(CustomDataInput *input) {
    AllianceInformations::deserialize(input);
    this->_creationDateFunc(input);
}

void AllianceFactSheetInformations::_creationDateFunc(CustomDataInput *input) {
    this->creationDate = input->readInt();
    if (this->creationDate < 0) {

    }
}
