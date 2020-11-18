#ifndef ALLIANCEMODIFICATIONSTARTEDMESSAGE_H
#define ALLIANCEMODIFICATIONSTARTEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceModificationStartedMessage : public DeserializeInterface {
public:
    bool canChangeName = false;
    bool canChangeTag = false;
    bool canChangeEmblem = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);
};

#endif