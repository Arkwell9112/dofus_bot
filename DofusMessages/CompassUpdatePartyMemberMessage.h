#ifndef COMPASSUPDATEPARTYMEMBERMESSAGE_H
#define COMPASSUPDATEPARTYMEMBERMESSAGE_H

#include "CompassUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CompassUpdatePartyMemberMessage : public CompassUpdateMessage {
public:
    double memberId = 0;
    bool active = false;

    void deserialize(CustomDataInput *input);

private:
    void _memberIdFunc(CustomDataInput *input);

    void _activeFunc(CustomDataInput *input);
};

#endif