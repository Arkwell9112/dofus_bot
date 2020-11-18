#ifndef MOUNTINFORMATIONREQUESTMESSAGE_H
#define MOUNTINFORMATIONREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountInformationRequestMessage : public DeserializeInterface {
public:
    double id = 0;
    double time = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _timeFunc(CustomDataInput *input);
};

#endif