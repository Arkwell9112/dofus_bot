#ifndef TAXCOLLECTORMOVEMENT_H
#define TAXCOLLECTORMOVEMENT_H

#include "TaxCollectorBasicInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TaxCollectorMovement : public DeserializeInterface {
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