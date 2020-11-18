#include "AnomalySubareaInformationResponseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AnomalySubareaInformation.h"

void AnomalySubareaInformationResponseMessage::deserialize(CustomDataInput *input) {
    AnomalySubareaInformation _item1;
    unsigned int _subareasLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _subareasLen; _i1++) {
        _item1.deserialize(input);
        this->subareas.push_back(_item1);
    }
}