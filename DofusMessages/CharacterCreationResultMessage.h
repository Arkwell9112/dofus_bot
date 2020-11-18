#ifndef CHARACTERCREATIONRESULTMESSAGE_H
#define CHARACTERCREATIONRESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterCreationResultMessage : public DeserializeInterface {
public:
    unsigned int result = 1;

    void deserialize(CustomDataInput *input);

private:
    void _resultFunc(CustomDataInput *input);
};

#endif