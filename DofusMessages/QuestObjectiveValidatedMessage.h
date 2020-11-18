#ifndef QUESTOBJECTIVEVALIDATEDMESSAGE_H
#define QUESTOBJECTIVEVALIDATEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class QuestObjectiveValidatedMessage : public DeserializeInterface {
public:
    unsigned int questId = 0;
    unsigned int objectiveId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _questIdFunc(CustomDataInput *input);

    void _objectiveIdFunc(CustomDataInput *input);
};

#endif