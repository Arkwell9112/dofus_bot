#ifndef HAAPICANCELBIDREQUESTMESSAGE_H
#define HAAPICANCELBIDREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HaapiCancelBidRequestMessage : public DeserializeInterface {
public:
    double id = 0;
    unsigned int type = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _typeFunc(CustomDataInput *input);
};

#endif