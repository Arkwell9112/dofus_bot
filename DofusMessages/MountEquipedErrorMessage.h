#ifndef MOUNTEQUIPEDERRORMESSAGE_H
#define MOUNTEQUIPEDERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountEquipedErrorMessage : public DeserializeInterface {
public:
    unsigned int errorType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _errorTypeFunc(CustomDataInput *input);
};

#endif