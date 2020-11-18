#ifndef QUESTOBJECTIVEINFORMATIONSWITHCOMPLETION_H
#define QUESTOBJECTIVEINFORMATIONSWITHCOMPLETION_H

#include "QuestObjectiveInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class QuestObjectiveInformationsWithCompletion : public QuestObjectiveInformations {
public:
    unsigned int curCompletion = 0;
    unsigned int maxCompletion = 0;

    void deserialize(CustomDataInput *input);

private:
    void _curCompletionFunc(CustomDataInput *input);

    void _maxCompletionFunc(CustomDataInput *input);
};

#endif