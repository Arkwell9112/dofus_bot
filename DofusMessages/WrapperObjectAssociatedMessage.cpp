#include "WrapperObjectAssociatedMessage.h"
#include "SymbioticObjectAssociatedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void WrapperObjectAssociatedMessage::deserialize(CustomDataInput *input) {
    SymbioticObjectAssociatedMessage::deserialize(input);
}