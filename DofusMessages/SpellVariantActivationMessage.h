#ifndef SPELLVARIANTACTIVATIONMESSAGE_H
#define SPELLVARIANTACTIVATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SpellVariantActivationMessage : public DeserializeInterface {
public:
    unsigned int spellId = 0;
    bool result = false;

    void deserialize(CustomDataInput *input);

private:
    void _spellIdFunc(CustomDataInput *input);

    void _resultFunc(CustomDataInput *input);
};

#endif