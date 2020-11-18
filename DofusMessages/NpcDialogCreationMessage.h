#ifndef NPCDIALOGCREATIONMESSAGE_H
#define NPCDIALOGCREATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NpcDialogCreationMessage : public DeserializeInterface {
public:
    double mapId = 0;
    int npcId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _mapIdFunc(CustomDataInput *input);

    void _npcIdFunc(CustomDataInput *input);
};

#endif