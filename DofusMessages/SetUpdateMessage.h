#ifndef SETUPDATEMESSAGE_H
#define SETUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectEffect.h"

#include <string>
#include <vector>

class SetUpdateMessage : public DeserializeInterface {
public:
    unsigned int setId = 0;
    std::vector<unsigned int> setObjects;
    std::vector<ObjectEffect> setEffects;

    void deserialize(CustomDataInput *input);

private:
    void _setIdFunc(CustomDataInput *input);

    void _setObjectsFunc(CustomDataInput *input);

    void _setEffectsFunc(CustomDataInput *input);
};

#endif