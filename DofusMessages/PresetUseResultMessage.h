#ifndef PRESETUSERESULTMESSAGE_H
#define PRESETUSERESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

#include <string>
#include <vector>

class PresetUseResultMessage : public DeserializeInterface {
public:
    int presetId = 0;
    unsigned int code = 3;

    void deserialize(CustomDataInput *input);

private:
    void _presetIdFunc(CustomDataInput *input);

    void _codeFunc(CustomDataInput *input);
};

#endif