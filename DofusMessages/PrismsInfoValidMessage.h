#ifndef PRISMSINFOVALIDMESSAGE_H
#define PRISMSINFOVALIDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PrismFightersInformation.h"

#include <string>
#include <vector>

class PrismsInfoValidMessage : public DeserializeInterface {
public:
    std::vector<PrismFightersInformation> fights;

    void deserialize(CustomDataInput *input);

private:
};

#endif