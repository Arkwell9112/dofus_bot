#ifndef PRISMFIGHTSTATEUPDATEMESSAGE_H
#define PRISMFIGHTSTATEUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismFightStateUpdateMessage : public DeserializeInterface {
public:
    unsigned int state = 0;

    void deserialize(CustomDataInput *input);

private:
    void _stateFunc(CustomDataInput *input);
};

#endif