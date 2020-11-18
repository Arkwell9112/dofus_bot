#ifndef STORAGEKAMASUPDATEMESSAGE_H
#define STORAGEKAMASUPDATEMESSAGE_H

#include "KamasUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StorageKamasUpdateMessage : public DeserializeInterface {
public:
    double kamasTotal = 0;

    void deserialize(CustomDataInput *input);

private:
    void _kamasTotalFunc(CustomDataInput *input);
};

#endif