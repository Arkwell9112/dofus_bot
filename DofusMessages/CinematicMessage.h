#ifndef CINEMATICMESSAGE_H
#define CINEMATICMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CinematicMessage : public DeserializeInterface {
public:
    unsigned int cinematicId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cinematicIdFunc(CustomDataInput *input);
};

#endif