#ifndef ENTITYLOOK_H
#define ENTITYLOOK_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EntityLook : public DeserializeInterface {
public:
    unsigned int bonesId = 0;
    std::vector<unsigned int> skins;
    std::vector<int> indexedColors;
    std::vector<int> scales;

    void deserialize(CustomDataInput *input);

private:
    void _bonesIdFunc(CustomDataInput *input);

    void _skinsFunc(CustomDataInput *input);

    void _indexedColorsFunc(CustomDataInput *input);

    void _scalesFunc(CustomDataInput *input);
};

#endif