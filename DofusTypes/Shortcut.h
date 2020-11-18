#ifndef SHORTCUT_H
#define SHORTCUT_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class Shortcut : public DeserializeInterface {
public:
    unsigned int slot = 0;

    void deserialize(CustomDataInput *input);

private:
    void _slotFunc(CustomDataInput *input);
};

#endif