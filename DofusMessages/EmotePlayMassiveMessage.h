#ifndef EMOTEPLAYMASSIVEMESSAGE_H
#define EMOTEPLAYMASSIVEMESSAGE_H

#include "EmotePlayAbstractMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EmotePlayMassiveMessage : public EmotePlayAbstractMessage {
public:
    std::vector<double> actorIds;

    void deserialize(CustomDataInput *input);

private:
    void _actorIdsFunc(CustomDataInput *input);
};

#endif