#ifndef MIMICRYOBJECTPREVIEWMESSAGE_H
#define MIMICRYOBJECTPREVIEWMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class MimicryObjectPreviewMessage : public DeserializeInterface {
public:
    ObjectItem result;

    void deserialize(CustomDataInput *input);

private:
};

#endif