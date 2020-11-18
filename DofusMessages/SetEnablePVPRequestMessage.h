#ifndef SETENABLEPVPREQUESTMESSAGE_H
#define SETENABLEPVPREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SetEnablePVPRequestMessage : public DeserializeInterface {
public:
    bool enable = false;

    void deserialize(CustomDataInput *input);

private:
    void _enableFunc(CustomDataInput *input);
};

#endif