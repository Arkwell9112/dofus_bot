#ifndef ALLIANCELISTMESSAGE_H
#define ALLIANCELISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AllianceFactSheetInformations.h"

#include <string>
#include <vector>

class AllianceListMessage : public DeserializeInterface {
public:
    std::vector<AllianceFactSheetInformations> alliances;

    void deserialize(CustomDataInput *input);

private:
};

#endif