#include "AlignmentWarEffortProgressionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AlignmentWarEffortInformation.h"

void AlignmentWarEffortProgressionMessage::deserialize(CustomDataInput *input) {
    AlignmentWarEffortInformation _item1;
    unsigned int _effortProgressionsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _effortProgressionsLen; _i1++) {
        _item1.deserialize(input);
        this->effortProgressions.push_back(_item1);
    }
}