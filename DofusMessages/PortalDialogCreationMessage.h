#ifndef PORTALDIALOGCREATIONMESSAGE_H
#define PORTALDIALOGCREATIONMESSAGE_H

#include "NpcDialogCreationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PortalDialogCreationMessage : public NpcDialogCreationMessage {
public:
    unsigned int type = 0;

    void deserialize(CustomDataInput *input);

private:
    void _typeFunc(CustomDataInput *input);
};

#endif