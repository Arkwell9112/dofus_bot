#ifndef ZAAPRESPAWNUPDATEDMESSAGE_H
#define ZAAPRESPAWNUPDATEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ZaapRespawnUpdatedMessage : public DeserializeInterface {
public:
    double mapId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _mapIdFunc(CustomDataInput *input);
};

#endif