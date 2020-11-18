#ifndef MOUNTSETXPRATIOREQUESTMESSAGE_H
#define MOUNTSETXPRATIOREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountSetXpRatioRequestMessage : public DeserializeInterface {
public:
    unsigned int xpRatio = 0;

    void deserialize(CustomDataInput *input);

private:
    void _xpRatioFunc(CustomDataInput *input);
};

#endif