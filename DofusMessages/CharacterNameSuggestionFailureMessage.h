#ifndef CHARACTERNAMESUGGESTIONFAILUREMESSAGE_H
#define CHARACTERNAMESUGGESTIONFAILUREMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterNameSuggestionFailureMessage : public DeserializeInterface {
public:
    unsigned int reason = 1;

    void deserialize(CustomDataInput *input);

private:
    void _reasonFunc(CustomDataInput *input);
};

#endif