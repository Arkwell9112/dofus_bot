#ifndef KAMASUPDATEMESSAGE_H
#define KAMASUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class KamasUpdateMessage : public DeserializeInterface {
public:
    double kamasTotal = 0;

    void deserialize(CustomDataInput *input);

private:
    void _kamasTotalFunc(CustomDataInput *input);
};

#endif