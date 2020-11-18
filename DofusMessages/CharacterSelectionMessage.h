#ifndef CHARACTERSELECTIONMESSAGE_H
#define CHARACTERSELECTIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterSelectionMessage : public DeserializeInterface {
public:
    double id = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);
};

#endif