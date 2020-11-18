#ifndef PRISMFIGHTJOINLEAVEREQUESTMESSAGE_H
#define PRISMFIGHTJOINLEAVEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismFightJoinLeaveRequestMessage : public DeserializeInterface {
public:
    unsigned int subAreaId = 0;
    bool join = false;

    void deserialize(CustomDataInput *input);

private:
    void _subAreaIdFunc(CustomDataInput *input);

    void _joinFunc(CustomDataInput *input);
};

#endif