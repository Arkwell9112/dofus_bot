#ifndef QUESTSTARTREQUESTMESSAGE_H
#define QUESTSTARTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class QuestStartRequestMessage : public DeserializeInterface {
public:
    unsigned int questId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _questIdFunc(CustomDataInput *input);
};

#endif