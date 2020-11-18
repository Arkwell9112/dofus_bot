#ifndef QUESTSTEPINFOREQUESTMESSAGE_H
#define QUESTSTEPINFOREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class QuestStepInfoRequestMessage : public DeserializeInterface {
public:
    unsigned int questId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _questIdFunc(CustomDataInput *input);
};

#endif