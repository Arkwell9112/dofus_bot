#ifndef QUESTACTIVEDETAILEDINFORMATIONS_H
#define QUESTACTIVEDETAILEDINFORMATIONS_H

#include "QuestObjectiveInformations.h"
#include "QuestActiveInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class QuestActiveDetailedInformations : public QuestActiveInformations {
public:
    unsigned int stepId = 0;
    std::vector<QuestObjectiveInformations> objectives;

    void deserialize(CustomDataInput *input);

private:
    void _stepIdFunc(CustomDataInput *input);

    void _objectivesFunc(CustomDataInput *input);
};

#endif