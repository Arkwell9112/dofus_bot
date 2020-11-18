#ifndef PADDOCKINFORMATIONSFORSELL_H
#define PADDOCKINFORMATIONSFORSELL_H

#include "PaddockInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PaddockInformationsForSell : public DeserializeInterface {
public:
    std::string guildOwner;
    int worldX = 0;
    int worldY = 0;
    unsigned int subAreaId = 0;
    int nbMount = 0;
    int nbObject = 0;
    double price = 0;

    void deserialize(CustomDataInput *input);

private:
    void _guildOwnerFunc(CustomDataInput *input);

    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _subAreaIdFunc(CustomDataInput *input);

    void _nbMountFunc(CustomDataInput *input);

    void _nbObjectFunc(CustomDataInput *input);

    void _priceFunc(CustomDataInput *input);
};

#endif