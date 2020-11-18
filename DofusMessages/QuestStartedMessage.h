#ifndef QUESTSTARTEDMESSAGE_H
#define QUESTSTARTEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class QuestStartedMessage : public DeserializeInterface {
public:
    unsigned int questId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _questIdFunc(CustomDataInput *input);
};

#endif