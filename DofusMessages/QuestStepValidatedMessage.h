#ifndef QUESTSTEPVALIDATEDMESSAGE_H
#define QUESTSTEPVALIDATEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class QuestStepValidatedMessage : public DeserializeInterface {
public:
    unsigned int questId = 0;
    unsigned int stepId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _questIdFunc(CustomDataInput *input);

    void _stepIdFunc(CustomDataInput *input);
};

#endif