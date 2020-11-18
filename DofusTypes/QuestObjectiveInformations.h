#ifndef QUESTOBJECTIVEINFORMATIONS_H
#define QUESTOBJECTIVEINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class QuestObjectiveInformations : public DeserializeInterface {
public:
    unsigned int objectiveId = 0;
    bool objectiveStatus = false;
    std::vector<std::string> dialogParams;

    void deserialize(CustomDataInput *input);

private:
    void _objectiveIdFunc(CustomDataInput *input);

    void _objectiveStatusFunc(CustomDataInput *input);

    void _dialogParamsFunc(CustomDataInput *input);
};

#endif