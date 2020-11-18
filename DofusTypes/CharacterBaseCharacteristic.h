#ifndef CHARACTERBASECHARACTERISTIC_H
#define CHARACTERBASECHARACTERISTIC_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterBaseCharacteristic : public DeserializeInterface {
public:
    int base = 0;
    int additionnal = 0;
    int objectsAndMountBonus = 0;
    int alignGiftBonus = 0;
    int contextModif = 0;

    void deserialize(CustomDataInput *input);

private:
    void _baseFunc(CustomDataInput *input);

    void _additionnalFunc(CustomDataInput *input);

    void _objectsAndMountBonusFunc(CustomDataInput *input);

    void _alignGiftBonusFunc(CustomDataInput *input);

    void _contextModifFunc(CustomDataInput *input);
};

#endif