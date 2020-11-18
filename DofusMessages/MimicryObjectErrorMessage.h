#ifndef MIMICRYOBJECTERRORMESSAGE_H
#define MIMICRYOBJECTERRORMESSAGE_H

#include "SymbioticObjectErrorMessage.h"
#include "ObjectErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MimicryObjectErrorMessage : public SymbioticObjectErrorMessage {
public:
    bool preview = false;

    void deserialize(CustomDataInput *input);

private:
    void _previewFunc(CustomDataInput *input);
};

#endif