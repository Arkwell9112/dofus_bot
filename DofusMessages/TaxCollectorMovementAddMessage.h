#ifndef TAXCOLLECTORMOVEMENTADDMESSAGE_H
#define TAXCOLLECTORMOVEMENTADDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TaxCollectorMovement.h"

#include "../DofusTypes/TaxCollectorInformations.h"

#include <string>
#include <vector>

class TaxCollectorMovementAddMessage : public DeserializeInterface {
public:
    TaxCollectorInformations informations;

    void deserialize(CustomDataInput *input);

private:
};

#endif