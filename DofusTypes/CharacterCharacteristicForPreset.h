#ifndef CHARACTERCHARACTERISTICFORPRESET_H
#define CHARACTERCHARACTERISTICFORPRESET_H

#include "SimpleCharacterCharacteristicForPreset.h"
#include "Preset.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterCharacteristicForPreset : public SimpleCharacterCharacteristicForPreset {
public:
    int stuff = 0;

    void deserialize(CustomDataInput *input);

private:
    void _stuffFunc(CustomDataInput *input);
};

#endif