#ifndef ACTORORIENTATION_H
#define ACTORORIENTATION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ActorOrientation : public DeserializeInterface {
public:
    double id = 0;
    unsigned int direction = 1;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _directionFunc(CustomDataInput *input);
};

#endif