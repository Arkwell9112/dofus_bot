#ifndef GUESTMODEMESSAGE_H
#define GUESTMODEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuestModeMessage : public DeserializeInterface {
public:
    bool active = false;

    void deserialize(CustomDataInput *input);

private:
    void _activeFunc(CustomDataInput *input);
};

#endif