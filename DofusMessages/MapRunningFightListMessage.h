#ifndef MAPRUNNINGFIGHTLISTMESSAGE_H
#define MAPRUNNINGFIGHTLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/FightExternalInformations.h"

#include <string>
#include <vector>

class MapRunningFightListMessage : public DeserializeInterface {
public:
    std::vector<FightExternalInformations> fights;

    void deserialize(CustomDataInput *input);

private:
};

#endif