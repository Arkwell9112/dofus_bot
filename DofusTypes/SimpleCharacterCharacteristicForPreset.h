#ifndef SIMPLECHARACTERCHARACTERISTICFORPRESET_H
#define SIMPLECHARACTERCHARACTERISTICFORPRESET_H

#include "Preset.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SimpleCharacterCharacteristicForPreset : public DeserializeInterface {
public:
    std::string keyword;
    int base = 0;
    int additionnal = 0;

    void deserialize(CustomDataInput *input);

private:
    void _keywordFunc(CustomDataInput *input);

    void _baseFunc(CustomDataInput *input);

    void _additionnalFunc(CustomDataInput *input);
};

#endif