#ifndef GAMECONTEXTREMOVEELEMENTWITHEVENTMESSAGE_H
#define GAMECONTEXTREMOVEELEMENTWITHEVENTMESSAGE_H

#include "GameContextRemoveElementMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameContextRemoveElementWithEventMessage : public GameContextRemoveElementMessage {
public:
    unsigned int elementEventId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _elementEventIdFunc(CustomDataInput *input);
};

#endif