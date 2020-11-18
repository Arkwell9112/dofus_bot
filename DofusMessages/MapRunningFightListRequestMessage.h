#ifndef MAPRUNNINGFIGHTLISTREQUESTMESSAGE_H
#define MAPRUNNINGFIGHTLISTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MapRunningFightListRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif