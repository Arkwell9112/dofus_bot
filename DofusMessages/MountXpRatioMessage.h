#ifndef MOUNTXPRATIOMESSAGE_H
#define MOUNTXPRATIOMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountXpRatioMessage : public DeserializeInterface {
public:
    unsigned int ratio = 0;

    void deserialize(CustomDataInput *input);

private:
    void _ratioFunc(CustomDataInput *input);
};

#endif