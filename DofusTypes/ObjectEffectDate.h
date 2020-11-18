#ifndef OBJECTEFFECTDATE_H
#define OBJECTEFFECTDATE_H

#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectEffectDate : public ObjectEffect {
public:
    unsigned int year = 0;
    unsigned int month = 0;
    unsigned int day = 0;
    unsigned int hour = 0;
    unsigned int minute = 0;

    void deserialize(CustomDataInput *input);

private:
    void _yearFunc(CustomDataInput *input);

    void _monthFunc(CustomDataInput *input);

    void _dayFunc(CustomDataInput *input);

    void _hourFunc(CustomDataInput *input);

    void _minuteFunc(CustomDataInput *input);
};

#endif