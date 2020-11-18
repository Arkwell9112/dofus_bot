#ifndef PLAYERSTATUSUPDATEERRORMESSAGE_H
#define PLAYERSTATUSUPDATEERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PlayerStatus.h"

#include <string>
#include <vector>

class PlayerStatusUpdateErrorMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif