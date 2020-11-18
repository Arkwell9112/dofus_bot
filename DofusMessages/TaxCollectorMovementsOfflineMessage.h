#ifndef TAXCOLLECTORMOVEMENTSOFFLINEMESSAGE_H
#define TAXCOLLECTORMOVEMENTSOFFLINEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TaxCollectorMovement.h"

#include <string>
#include <vector>

class TaxCollectorMovementsOfflineMessage : public DeserializeInterface {
public:
    std::vector<TaxCollectorMovement> movements;

    void deserialize(CustomDataInput *input);

private:
};

#endif