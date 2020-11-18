#ifndef MOUNTINFORMATIONINPADDOCKREQUESTMESSAGE_H
#define MOUNTINFORMATIONINPADDOCKREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountInformationInPaddockRequestMessage : public DeserializeInterface {
public:
    int mapRideId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _mapRideIdFunc(CustomDataInput *input);
};

#endif