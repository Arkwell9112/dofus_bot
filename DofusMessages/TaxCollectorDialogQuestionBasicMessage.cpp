#include "TaxCollectorDialogQuestionBasicMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TaxCollectorDialogQuestionBasicMessage::deserialize(CustomDataInput *input) {
    this->guildInfo.deserialize(input);
}