#ifndef MOUNTEMOTEICONUSEDOKMESSAGE_H
#define MOUNTEMOTEICONUSEDOKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountEmoteIconUsedOkMessage : public DeserializeInterface {
public:
    int mountId = 0;
    unsigned int reactionType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _mountIdFunc(CustomDataInput *input);

    void _reactionTypeFunc(CustomDataInput *input);
};

#endif