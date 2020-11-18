#ifndef SLAVENOLONGERCONTROLEDMESSAGE_H
#define SLAVENOLONGERCONTROLEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SlaveNoLongerControledMessage : public DeserializeInterface {
public:
    double masterId = 0;
    double slaveId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _masterIdFunc(CustomDataInput *input);

    void _slaveIdFunc(CustomDataInput *input);
};

#endif