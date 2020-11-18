#ifndef PAUSEDIALOGMESSAGE_H
#define PAUSEDIALOGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PauseDialogMessage : public DeserializeInterface {
public:
    unsigned int dialogType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _dialogTypeFunc(CustomDataInput *input);
};

#endif