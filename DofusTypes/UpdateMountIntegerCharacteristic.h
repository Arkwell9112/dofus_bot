#ifndef UPDATEMOUNTINTEGERCHARACTERISTIC_H
#define UPDATEMOUNTINTEGERCHARACTERISTIC_H

#include "UpdateMountCharacteristic.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class UpdateMountIntegerCharacteristic : public UpdateMountCharacteristic {
public:
    int value = 0;

    void deserialize(CustomDataInput *input);

private:
    void _valueFunc(CustomDataInput *input);
};

#endif