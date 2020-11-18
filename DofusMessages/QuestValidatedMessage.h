#ifndef QUESTVALIDATEDMESSAGE_H
#define QUESTVALIDATEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class QuestValidatedMessage : public DeserializeInterface {
public:
    unsigned int questId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _questIdFunc(CustomDataInput *input);
};

#endif