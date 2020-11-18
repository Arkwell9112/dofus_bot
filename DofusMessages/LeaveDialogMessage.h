#ifndef LEAVEDIALOGMESSAGE_H
#define LEAVEDIALOGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LeaveDialogMessage : public DeserializeInterface {
public:
    unsigned int dialogType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _dialogTypeFunc(CustomDataInput *input);
};

#endif