#ifndef CHARACTERSELECTEDERRORMESSAGE_H
#define CHARACTERSELECTEDERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterSelectedErrorMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif