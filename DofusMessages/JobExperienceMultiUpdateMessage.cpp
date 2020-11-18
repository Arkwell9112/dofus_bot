#include "JobExperienceMultiUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobExperience.h"

void JobExperienceMultiUpdateMessage::deserialize(CustomDataInput *input) {
    JobExperience _item1;
    unsigned int _experiencesUpdateLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _experiencesUpdateLen; _i1++) {
        _item1.deserialize(input);
        this->experiencesUpdate.push_back(_item1);
    }
}