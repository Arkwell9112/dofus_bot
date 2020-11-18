#ifndef TREASUREHUNTREQUESTANSWERMESSAGE_H
#define TREASUREHUNTREQUESTANSWERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TreasureHuntRequestAnswerMessage : public DeserializeInterface {
public:
    unsigned int questType = 0;
    unsigned int result = 0;

    void deserialize(CustomDataInput *input);

private:
    void _questTypeFunc(CustomDataInput *input);

    void _resultFunc(CustomDataInput *input);
};

#endif