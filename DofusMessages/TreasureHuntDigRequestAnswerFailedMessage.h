#ifndef TREASUREHUNTDIGREQUESTANSWERFAILEDMESSAGE_H
#define TREASUREHUNTDIGREQUESTANSWERFAILEDMESSAGE_H

#include "TreasureHuntDigRequestAnswerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TreasureHuntDigRequestAnswerFailedMessage : public TreasureHuntDigRequestAnswerMessage {
public:
    unsigned int wrongFlagCount = 0;

    void deserialize(CustomDataInput *input);

private:
    void _wrongFlagCountFunc(CustomDataInput *input);
};

#endif