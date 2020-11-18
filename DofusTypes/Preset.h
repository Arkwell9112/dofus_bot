#ifndef PRESET_H
#define PRESET_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class Preset : public DeserializeInterface {
public:
    int id = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);
};

#endif