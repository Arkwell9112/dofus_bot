#ifndef ALLIANCETAXCOLLECTORDIALOGQUESTIONEXTENDEDMESSAGE_H
#define ALLIANCETAXCOLLECTORDIALOGQUESTIONEXTENDEDMESSAGE_H

#include "TaxCollectorDialogQuestionExtendedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/BasicNamedAllianceInformations.h"

#include "../DofusTypes/AllianceInformations.h"

#include <string>
#include <vector>

class AllianceTaxCollectorDialogQuestionExtendedMessage : public TaxCollectorDialogQuestionExtendedMessage {
public:
    BasicNamedAllianceInformations alliance;

    void deserialize(CustomDataInput *input);

private:
};

#endif