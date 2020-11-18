#ifndef DISPLAYNUMERICALVALUEPADDOCKMESSAGE_H
#define DISPLAYNUMERICALVALUEPADDOCKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DisplayNumericalValuePaddockMessage : public DeserializeInterface {
public:
    int rideId = 0;
    int value = 0;
    unsigned int type = 0;

    void deserialize(CustomDataInput *input);

private:
    void _rideIdFunc(CustomDataInput *input);

    void _valueFunc(CustomDataInput *input);

    void _typeFunc(CustomDataInput *input);
};

#endif