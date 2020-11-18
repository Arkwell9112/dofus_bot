#include "SymbioticObjectAssociatedMessage.h"
#include "MimicryObjectAssociatedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MimicryObjectAssociatedMessage::deserialize(CustomDataInput *input) {
    SymbioticObjectAssociatedMessage::deserialize(input);
}