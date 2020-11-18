#ifndef PRISMFIGHTADDEDMESSAGE_H
#define PRISMFIGHTADDEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PrismFightersInformation.h"

#include <string>
#include <vector>

class PrismFightAddedMessage : public DeserializeInterface {
public:
    PrismFightersInformation fight;

    void deserialize(CustomDataInput *input);

private:
};

#endif