#include "JobDescriptionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobDescription.h"

void JobDescriptionMessage::deserialize(CustomDataInput *input) {
    JobDescription _item1;
    unsigned int _jobsDescriptionLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _jobsDescriptionLen; _i1++) {
        _item1.deserialize(input);
        this->jobsDescription.push_back(_item1);
    }
}