#ifndef CHARACTERSPELLMODIFICATION_H
#define CHARACTERSPELLMODIFICATION_H

#include "CharacterBaseCharacteristic.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterSpellModification : public DeserializeInterface {
public:
    unsigned int modificationType = 0;
    unsigned int spellId = 0;
    CharacterBaseCharacteristic value;

    void deserialize(CustomDataInput *input);

private:
    void _modificationTypeFunc(CustomDataInput *input);

    void _spellIdFunc(CustomDataInput *input);
};

#endif