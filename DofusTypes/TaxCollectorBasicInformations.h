#ifndef TAXCOLLECTORBASICINFORMATIONS_H
#define TAXCOLLECTORBASICINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TaxCollectorBasicInformations : public DeserializeInterface {
public:
    unsigned int firstNameId = 0;
    unsigned int lastNameId = 0;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _firstNameIdFunc(CustomDataInput *input);

    void _lastNameIdFunc(CustomDataInput *input);

    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _mapIdFunc(CustomDataInput *input);

    void _subAreaIdFunc(CustomDataInput *input);
};

#endif