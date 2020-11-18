#ifndef ICONPRESETSAVEREQUESTMESSAGE_H
#define ICONPRESETSAVEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

#include <string>
#include <vector>

class IconPresetSaveRequestMessage : public DeserializeInterface {
public:
    int presetId = 0;
    unsigned int symbolId = 0;
    bool updateData = false;

    void deserialize(CustomDataInput *input);

private:
    void _presetIdFunc(CustomDataInput *input);

    void _symbolIdFunc(CustomDataInput *input);

    void _updateDataFunc(CustomDataInput *input);
};

#endif