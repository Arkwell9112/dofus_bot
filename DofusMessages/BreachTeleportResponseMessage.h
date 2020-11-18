#ifndef BREACHTELEPORTRESPONSEMESSAGE_H
#define BREACHTELEPORTRESPONSEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachTeleportResponseMessage : public DeserializeInterface {
public:
    bool teleported = false;

    void deserialize(CustomDataInput *input);

private:
    void _teleportedFunc(CustomDataInput *input);
};

#endif