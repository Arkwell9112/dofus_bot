#ifndef CHARACTERSLISTERRORMESSAGE_H
#define CHARACTERSLISTERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharactersListErrorMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif