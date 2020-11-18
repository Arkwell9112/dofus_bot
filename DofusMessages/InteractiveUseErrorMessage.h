#ifndef INTERACTIVEUSEERRORMESSAGE_H
#define INTERACTIVEUSEERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class InteractiveUseErrorMessage : public DeserializeInterface {
public:
    unsigned int elemId = 0;
    unsigned int skillInstanceUid = 0;

    void deserialize(CustomDataInput *input);

private:
    void _elemIdFunc(CustomDataInput *input);

    void _skillInstanceUidFunc(CustomDataInput *input);
};

#endif