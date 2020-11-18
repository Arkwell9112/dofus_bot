#ifndef ATLASPOINTINFORMATIONSMESSAGE_H
#define ATLASPOINTINFORMATIONSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AtlasPointsInformations.h"

#include <string>
#include <vector>

class AtlasPointInformationsMessage : public DeserializeInterface {
public:
    AtlasPointsInformations type;

    void deserialize(CustomDataInput *input);

private:
};

#endif