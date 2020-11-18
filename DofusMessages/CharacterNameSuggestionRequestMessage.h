#ifndef CHARACTERNAMESUGGESTIONREQUESTMESSAGE_H
#define CHARACTERNAMESUGGESTIONREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterNameSuggestionRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif