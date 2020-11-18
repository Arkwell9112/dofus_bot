#ifndef NPCGENERICACTIONREQUESTMESSAGE_H
#define NPCGENERICACTIONREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NpcGenericActionRequestMessage : public DeserializeInterface {
public:
    int npcId = 0;
    unsigned int npcActionId = 0;
    double npcMapId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _npcIdFunc(CustomDataInput *input);

    void _npcActionIdFunc(CustomDataInput *input);

    void _npcMapIdFunc(CustomDataInput *input);
};

#endif