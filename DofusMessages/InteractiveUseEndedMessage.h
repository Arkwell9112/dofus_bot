#ifndef INTERACTIVEUSEENDEDMESSAGE_H
#define INTERACTIVEUSEENDEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class InteractiveUseEndedMessage : public DeserializeInterface {
public:
    unsigned int elemId = 0;
    unsigned int skillId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _elemIdFunc(CustomDataInput *input);

    void _skillIdFunc(CustomDataInput *input);
};

#endif