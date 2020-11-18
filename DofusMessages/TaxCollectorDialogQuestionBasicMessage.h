#ifndef TAXCOLLECTORDIALOGQUESTIONBASICMESSAGE_H
#define TAXCOLLECTORDIALOGQUESTIONBASICMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildInformations.h"

#include "../DofusTypes/BasicGuildInformations.h"

#include <string>
#include <vector>

class TaxCollectorDialogQuestionBasicMessage : public DeserializeInterface {
public:
    BasicGuildInformations guildInfo;

    void deserialize(CustomDataInput *input);

private:
};

#endif