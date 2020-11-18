#ifndef OBJECTEFFECT_H
#define OBJECTEFFECT_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectEffect : public DeserializeInterface {
public:
    unsigned int actionId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _actionIdFunc(CustomDataInput *input);
};

#endif