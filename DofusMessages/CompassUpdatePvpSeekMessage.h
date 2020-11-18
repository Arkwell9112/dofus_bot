#ifndef COMPASSUPDATEPVPSEEKMESSAGE_H
#define COMPASSUPDATEPVPSEEKMESSAGE_H

#include "CompassUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CompassUpdatePvpSeekMessage : public CompassUpdateMessage {
public:
    double memberId = 0;
    std::string memberName;

    void deserialize(CustomDataInput *input);

private:
    void _memberIdFunc(CustomDataInput *input);

    void _memberNameFunc(CustomDataInput *input);
};

#endif