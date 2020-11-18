#ifndef SEQUENCESTARTMESSAGE_H
#define SEQUENCESTARTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SequenceStartMessage : public DeserializeInterface {
public:
    int sequenceType = 0;
    double authorId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _sequenceTypeFunc(CustomDataInput *input);

    void _authorIdFunc(CustomDataInput *input);
};

#endif