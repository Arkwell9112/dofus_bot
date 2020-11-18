#ifndef CLIENTUIOPENEDMESSAGE_H
#define CLIENTUIOPENEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ClientUIOpenedMessage : public DeserializeInterface {
public:
    unsigned int type = 0;

    void deserialize(CustomDataInput *input);

private:
    void _typeFunc(CustomDataInput *input);
};

#endif