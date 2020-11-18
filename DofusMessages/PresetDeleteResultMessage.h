#ifndef PRESETDELETERESULTMESSAGE_H
#define PRESETDELETERESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

#include <string>
#include <vector>

class PresetDeleteResultMessage : public DeserializeInterface {
public:
    int presetId = 0;
    unsigned int code = 2;

    void deserialize(CustomDataInput *input);

private:
    void _presetIdFunc(CustomDataInput *input);

    void _codeFunc(CustomDataInput *input);
};

#endif