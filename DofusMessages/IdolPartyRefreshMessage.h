#ifndef IDOLPARTYREFRESHMESSAGE_H
#define IDOLPARTYREFRESHMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PartyIdol.h"

#include "../DofusTypes/Idol.h"

#include <string>
#include <vector>

class IdolPartyRefreshMessage : public DeserializeInterface {
public:
    PartyIdol partyIdol;

    void deserialize(CustomDataInput *input);

private:
};

#endif