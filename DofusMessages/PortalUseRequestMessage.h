#ifndef PORTALUSEREQUESTMESSAGE_H
#define PORTALUSEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PortalUseRequestMessage : public DeserializeInterface {
public:
    unsigned int portalId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _portalIdFunc(CustomDataInput *input);
};

#endif