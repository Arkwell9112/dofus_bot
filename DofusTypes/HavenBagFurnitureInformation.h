#ifndef HAVENBAGFURNITUREINFORMATION_H
#define HAVENBAGFURNITUREINFORMATION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HavenBagFurnitureInformation : public DeserializeInterface {
public:
    unsigned int cellId = 0;
    int funitureId = 0;
    unsigned int orientation = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cellIdFunc(CustomDataInput *input);

    void _funitureIdFunc(CustomDataInput *input);

    void _orientationFunc(CustomDataInput *input);
};

#endif