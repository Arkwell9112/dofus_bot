#ifndef MIMICRYOBJECTASSOCIATEDMESSAGE_H
#define MIMICRYOBJECTASSOCIATEDMESSAGE_H

#include "SymbioticObjectAssociatedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MimicryObjectAssociatedMessage : public SymbioticObjectAssociatedMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif