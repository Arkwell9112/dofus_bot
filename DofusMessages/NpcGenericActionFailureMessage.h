#ifndef NPCGENERICACTIONFAILUREMESSAGE_H
#define NPCGENERICACTIONFAILUREMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NpcGenericActionFailureMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif