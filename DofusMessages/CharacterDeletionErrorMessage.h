#ifndef CHARACTERDELETIONERRORMESSAGE_H
#define CHARACTERDELETIONERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterDeletionErrorMessage : public DeserializeInterface {
public:
    unsigned int reason = 1;

    void deserialize(CustomDataInput *input);

private:
    void _reasonFunc(CustomDataInput *input);
};

#endif