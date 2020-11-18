#ifndef QUESTOBJECTIVEVALIDATIONMESSAGE_H
#define QUESTOBJECTIVEVALIDATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class QuestObjectiveValidationMessage : public DeserializeInterface {
public:
    unsigned int questId = 0;
    unsigned int objectiveId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _questIdFunc(CustomDataInput *input);

    void _objectiveIdFunc(CustomDataInput *input);
};

#endif