#ifndef COMPASSRESETMESSAGE_H
#define COMPASSRESETMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CompassResetMessage : public DeserializeInterface {
public:
    unsigned int type = 0;

    void deserialize(CustomDataInput *input);

private:
    void _typeFunc(CustomDataInput *input);
};

#endif