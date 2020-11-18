#ifndef ERRORMAPNOTFOUNDMESSAGE_H
#define ERRORMAPNOTFOUNDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ErrorMapNotFoundMessage : public DeserializeInterface {
public:
    double mapId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _mapIdFunc(CustomDataInput *input);
};

#endif