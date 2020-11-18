#ifndef IDOLLISTMESSAGE_H
#define IDOLLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PartyIdol.h"

#include "../DofusTypes/Idol.h"

#include <string>
#include <vector>

class IdolListMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> chosenIdols;
    std::vector<unsigned int> partyChosenIdols;
    std::vector<PartyIdol> partyIdols;

    void deserialize(CustomDataInput *input);

private:
    void _chosenIdolsFunc(CustomDataInput *input);

    void _partyChosenIdolsFunc(CustomDataInput *input);

    void _partyIdolsFunc(CustomDataInput *input);
};

#endif