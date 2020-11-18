#ifndef HOUSEPROPERTIESMESSAGE_H
#define HOUSEPROPERTIESMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/HouseInstanceInformations.h"

#include <string>
#include <vector>

class HousePropertiesMessage : public DeserializeInterface {
public:
    unsigned int houseId = 0;
    std::vector<unsigned int> doorsOnMap;
    HouseInstanceInformations properties;

    void deserialize(CustomDataInput *input);

private:
    void _houseIdFunc(CustomDataInput *input);

    void _doorsOnMapFunc(CustomDataInput *input);
};

#endif