#ifndef PRISMINFOJOINLEAVEREQUESTMESSAGE_H
#define PRISMINFOJOINLEAVEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismInfoJoinLeaveRequestMessage : public DeserializeInterface {
public:
    bool join = false;

    void deserialize(CustomDataInput *input);

private:
    void _joinFunc(CustomDataInput *input);
};

#endif