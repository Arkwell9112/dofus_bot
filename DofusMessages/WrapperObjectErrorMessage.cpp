#include "WrapperObjectErrorMessage.h"
#include "SymbioticObjectErrorMessage.h"
#include "ObjectErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void WrapperObjectErrorMessage::deserialize(CustomDataInput *input) {
    SymbioticObjectErrorMessage::deserialize(input);
}