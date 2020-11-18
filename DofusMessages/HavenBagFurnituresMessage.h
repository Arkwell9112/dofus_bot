#ifndef HAVENBAGFURNITURESMESSAGE_H
#define HAVENBAGFURNITURESMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/HavenBagFurnitureInformation.h"

#include <string>
#include <vector>

class HavenBagFurnituresMessage : public DeserializeInterface {
public:
    std::vector<HavenBagFurnitureInformation> furnituresInfos;

    void deserialize(CustomDataInput *input);

private:
};

#endif