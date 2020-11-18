#ifndef UPDATEMOUNTBOOLEANCHARACTERISTIC_H
#define UPDATEMOUNTBOOLEANCHARACTERISTIC_H

#include "UpdateMountCharacteristic.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class UpdateMountBooleanCharacteristic : public UpdateMountCharacteristic {
public:
    bool value = false;

    void deserialize(CustomDataInput *input);

private:
    void _valueFunc(CustomDataInput *input);
};

#endif