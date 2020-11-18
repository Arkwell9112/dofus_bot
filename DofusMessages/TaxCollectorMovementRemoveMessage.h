#ifndef TAXCOLLECTORMOVEMENTREMOVEMESSAGE_H
#define TAXCOLLECTORMOVEMENTREMOVEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TaxCollectorMovement.h"

#include <string>
#include <vector>

class TaxCollectorMovementRemoveMessage : public DeserializeInterface {
public:
    double collectorId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _collectorIdFunc(CustomDataInput *input);
};

#endif