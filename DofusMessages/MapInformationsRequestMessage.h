#ifndef MAPINFORMATIONSREQUESTMESSAGE_H
#define MAPINFORMATIONSREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MapInformationsRequestMessage : public DeserializeInterface {
public:
    double mapId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _mapIdFunc(CustomDataInput *input);
};

#endif