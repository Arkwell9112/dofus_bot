#ifndef ITEMFORPRESET_H
#define ITEMFORPRESET_H

#include "Preset.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ItemForPreset : public DeserializeInterface {
public:
    unsigned int position = 63;
    unsigned int objGid = 0;
    unsigned int objUid = 0;

    void deserialize(CustomDataInput *input);

private:
    void _positionFunc(CustomDataInput *input);

    void _objGidFunc(CustomDataInput *input);

    void _objUidFunc(CustomDataInput *input);
};

#endif