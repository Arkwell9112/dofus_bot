#ifndef CLIENTUIOPENEDBYOBJECTMESSAGE_H
#define CLIENTUIOPENEDBYOBJECTMESSAGE_H

#include "ClientUIOpenedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ClientUIOpenedByObjectMessage : public ClientUIOpenedMessage {
public:
    unsigned int uid = 0;

    void deserialize(CustomDataInput *input);

private:
    void _uidFunc(CustomDataInput *input);
};

#endif