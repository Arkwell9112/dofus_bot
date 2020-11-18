#ifndef ACTORALIGNMENTINFORMATIONS_H
#define ACTORALIGNMENTINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ActorAlignmentInformations : public DeserializeInterface {
public:
    int alignmentSide = 0;
    unsigned int alignmentValue = 0;
    unsigned int alignmentGrade = 0;
    double characterPower = 0;

    void deserialize(CustomDataInput *input);

private:
    void _alignmentSideFunc(CustomDataInput *input);

    void _alignmentValueFunc(CustomDataInput *input);

    void _alignmentGradeFunc(CustomDataInput *input);

    void _characterPowerFunc(CustomDataInput *input);
};

#endif