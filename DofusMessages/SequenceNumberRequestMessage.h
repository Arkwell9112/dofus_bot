#ifndef SEQUENCENUMBERREQUESTMESSAGE_H
#define SEQUENCENUMBERREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SequenceNumberRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif