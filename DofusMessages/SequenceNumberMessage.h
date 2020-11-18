#ifndef SEQUENCENUMBERMESSAGE_H
#define SEQUENCENUMBERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SequenceNumberMessage : public DeserializeInterface {
public:
    unsigned int number = 0;

    void deserialize(CustomDataInput *input);

private:
    void _numberFunc(CustomDataInput *input);
};

#endif