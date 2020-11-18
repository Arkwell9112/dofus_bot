#ifndef CHARACTERSELECTEDFORCEMESSAGE_H
#define CHARACTERSELECTEDFORCEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterSelectedForceMessage : public DeserializeInterface {
public:
    int id = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);
};

#endif