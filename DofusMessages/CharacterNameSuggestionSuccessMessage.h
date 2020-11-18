#ifndef CHARACTERNAMESUGGESTIONSUCCESSMESSAGE_H
#define CHARACTERNAMESUGGESTIONSUCCESSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterNameSuggestionSuccessMessage : public DeserializeInterface {
public:
    std::string suggestion;

    void deserialize(CustomDataInput *input);

private:
    void _suggestionFunc(CustomDataInput *input);
};

#endif