#ifndef FIGHTTRIGGEREDEFFECT_H
#define FIGHTTRIGGEREDEFFECT_H

#include "AbstractFightDispellableEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightTriggeredEffect : public AbstractFightDispellableEffect {
public:
    int param1 = 0;
    int param2 = 0;
    int param3 = 0;
    int delay = 0;

    void deserialize(CustomDataInput *input);

private:
    void _delayFunc(CustomDataInput *input);

    void _param1Func(CustomDataInput *input);

    void _param2Func(CustomDataInput *input);

    void _param3Func(CustomDataInput *input);
};

#endif