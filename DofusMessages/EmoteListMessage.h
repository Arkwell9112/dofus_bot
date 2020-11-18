#ifndef EMOTELISTMESSAGE_H
#define EMOTELISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EmoteListMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> emoteIds;

    void deserialize(CustomDataInput *input);

private:
    void _emoteIdsFunc(CustomDataInput *input);
};

#endif