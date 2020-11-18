#ifndef SELECTEDSERVERDATAEXTENDEDMESSAGE_H
#define SELECTEDSERVERDATAEXTENDEDMESSAGE_H

#include "SelectedServerDataMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameServerInformations.h"

#include <string>
#include <vector>

class SelectedServerDataExtendedMessage : public SelectedServerDataMessage {
public:
    std::vector<GameServerInformations> servers;

    void deserialize(CustomDataInput *input);

private:
};

#endif