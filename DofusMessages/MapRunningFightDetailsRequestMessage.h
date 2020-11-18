#ifndef MAPRUNNINGFIGHTDETAILSREQUESTMESSAGE_H
#define MAPRUNNINGFIGHTDETAILSREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MapRunningFightDetailsRequestMessage : public DeserializeInterface {
public:
    unsigned int fightId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);
};

#endif