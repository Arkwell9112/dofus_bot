#ifndef PLAYERSTATUSUPDATEREQUESTMESSAGE_H
#define PLAYERSTATUSUPDATEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PlayerStatus.h"

#include <string>
#include <vector>

class PlayerStatusUpdateRequestMessage : public DeserializeInterface {
public:
    PlayerStatus status;

    void deserialize(CustomDataInput *input);

private:
};

#endif