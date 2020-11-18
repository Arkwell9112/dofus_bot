#ifndef ALLIANCEVERSATILEINFOLISTMESSAGE_H
#define ALLIANCEVERSATILEINFOLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AllianceVersatileInformations.h"

#include <string>
#include <vector>

class AllianceVersatileInfoListMessage : public DeserializeInterface {
public:
    std::vector<AllianceVersatileInformations> alliances;

    void deserialize(CustomDataInput *input);

private:
};

#endif