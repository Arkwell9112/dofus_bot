#ifndef CURRENTMAPMESSAGE_H
#define CURRENTMAPMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CurrentMapMessage : public DeserializeInterface {
public:
    double mapId = 0;
    std::string mapKey;

    void deserialize(CustomDataInput *input);

private:
    void _mapIdFunc(CustomDataInput *input);

    void _mapKeyFunc(CustomDataInput *input);
};

#endif