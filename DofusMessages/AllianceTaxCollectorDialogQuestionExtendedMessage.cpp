#include "TaxCollectorDialogQuestionExtendedMessage.h"
#include "AllianceTaxCollectorDialogQuestionExtendedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceTaxCollectorDialogQuestionExtendedMessage::deserialize(CustomDataInput *input) {
    TaxCollectorDialogQuestionExtendedMessage::deserialize(input);
    this->alliance.deserialize(input);
}