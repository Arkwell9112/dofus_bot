#ifndef QUEUESTATUSMESSAGE_H
#define QUEUESTATUSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class QueueStatusMessage : public DeserializeInterface {
public:
    unsigned int position = 0;
    unsigned int total = 0;

    void deserialize(CustomDataInput *input);

private:
    void _positionFunc(CustomDataInput *input);

    void _totalFunc(CustomDataInput *input);
};

#endif