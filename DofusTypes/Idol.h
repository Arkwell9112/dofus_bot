#ifndef IDOL_H
#define IDOL_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class Idol : public DeserializeInterface {
public:
    unsigned int id = 0;
    unsigned int xpBonusPercent = 0;
    unsigned int dropBonusPercent = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _xpBonusPercentFunc(CustomDataInput *input);

    void _dropBonusPercentFunc(CustomDataInput *input);
};

#endif