#ifndef OBJECTEFFECTDURATION_H
#define OBJECTEFFECTDURATION_H

#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectEffectDuration : public ObjectEffect {
public:
    unsigned int days = 0;
    unsigned int hours = 0;
    unsigned int minutes = 0;

    void deserialize(CustomDataInput *input);

private:
    void _daysFunc(CustomDataInput *input);

    void _hoursFunc(CustomDataInput *input);

    void _minutesFunc(CustomDataInput *input);
};

#endif