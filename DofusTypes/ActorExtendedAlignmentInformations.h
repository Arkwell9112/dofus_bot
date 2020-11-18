#ifndef ACTOREXTENDEDALIGNMENTINFORMATIONS_H
#define ACTOREXTENDEDALIGNMENTINFORMATIONS_H

#include "ActorAlignmentInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ActorExtendedAlignmentInformations : public ActorAlignmentInformations {
public:
    unsigned int honor = 0;
    unsigned int honorGradeFloor = 0;
    unsigned int honorNextGradeFloor = 0;
    unsigned int aggressable = 0;

    void deserialize(CustomDataInput *input);

private:
    void _honorFunc(CustomDataInput *input);

    void _honorGradeFloorFunc(CustomDataInput *input);

    void _honorNextGradeFloorFunc(CustomDataInput *input);

    void _aggressableFunc(CustomDataInput *input);
};

#endif