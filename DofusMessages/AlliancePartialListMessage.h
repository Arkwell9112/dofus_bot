#ifndef ALLIANCEPARTIALLISTMESSAGE_H
#define ALLIANCEPARTIALLISTMESSAGE_H

#include "AllianceListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AlliancePartialListMessage : public AllianceListMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif