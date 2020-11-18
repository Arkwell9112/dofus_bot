#ifndef QUESTACTIVEINFORMATIONS_H
#define QUESTACTIVEINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class QuestActiveInformations : public DeserializeInterface {
public:
    unsigned int questId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _questIdFunc(CustomDataInput *input);
};

#endif