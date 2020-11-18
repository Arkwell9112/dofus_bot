#ifndef CHATSMILEYEXTRAPACKLISTMESSAGE_H
#define CHATSMILEYEXTRAPACKLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChatSmileyExtraPackListMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> packIds;

    void deserialize(CustomDataInput *input);

private:
    void _packIdsFunc(CustomDataInput *input);
};

#endif