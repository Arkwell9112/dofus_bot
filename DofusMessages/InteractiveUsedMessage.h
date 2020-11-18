#ifndef INTERACTIVEUSEDMESSAGE_H
#define INTERACTIVEUSEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class InteractiveUsedMessage : public DeserializeInterface {
public:
    double entityId = 0;
    unsigned int elemId = 0;
    unsigned int skillId = 0;
    unsigned int duration = 0;
    bool canMove = false;

    void deserialize(CustomDataInput *input);

private:
    void _entityIdFunc(CustomDataInput *input);

    void _elemIdFunc(CustomDataInput *input);

    void _skillIdFunc(CustomDataInput *input);

    void _durationFunc(CustomDataInput *input);

    void _canMoveFunc(CustomDataInput *input);
};

#endif