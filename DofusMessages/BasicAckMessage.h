#ifndef BASICACKMESSAGE_H
#define BASICACKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BasicAckMessage : public DeserializeInterface {
public:
    unsigned int seq = 0;
    unsigned int lastPacketId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _seqFunc(CustomDataInput *input);

    void _lastPacketIdFunc(CustomDataInput *input);
};

#endif