#ifndef GAMECONTEXTREMOVEMULTIPLEELEMENTSWITHEVENTSMESSAGE_H
#define GAMECONTEXTREMOVEMULTIPLEELEMENTSWITHEVENTSMESSAGE_H

#include "GameContextRemoveMultipleElementsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameContextRemoveMultipleElementsWithEventsMessage : public GameContextRemoveMultipleElementsMessage {
public:
    std::vector<unsigned int> elementEventIds;

    void deserialize(CustomDataInput *input);

private:
    void _elementEventIdsFunc(CustomDataInput *input);
};

#endif