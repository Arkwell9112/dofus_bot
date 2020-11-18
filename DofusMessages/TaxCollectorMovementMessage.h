#ifndef TAXCOLLECTORMOVEMENTMESSAGE_H
#define TAXCOLLECTORMOVEMENTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TaxCollectorMovement.h"

#include "../DofusTypes/TaxCollectorBasicInformations.h"

#include <string>
#include <vector>

class TaxCollectorMovementMessage : public DeserializeInterface {
public:
    unsigned int movementType = 0;
    TaxCollectorBasicInformations basicInfos;
    double playerId = 0;
    std::string playerName;

    void deserialize(CustomDataInput *input);

private:
    void _movementTypeFunc(CustomDataInput *input);

    void _playerIdFunc(CustomDataInput *input);

    void _playerNameFunc(CustomDataInput *input);
};

#endif