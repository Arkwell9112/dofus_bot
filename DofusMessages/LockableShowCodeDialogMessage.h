#ifndef LOCKABLESHOWCODEDIALOGMESSAGE_H
#define LOCKABLESHOWCODEDIALOGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LockableShowCodeDialogMessage : public DeserializeInterface {
public:
    bool changeOrUse = false;
    unsigned int codeSize = 0;

    void deserialize(CustomDataInput *input);

private:
    void _changeOrUseFunc(CustomDataInput *input);

    void _codeSizeFunc(CustomDataInput *input);
};

#endif