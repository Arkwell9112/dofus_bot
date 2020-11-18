#ifndef SEQUENCEENDMESSAGE_H
#define SEQUENCEENDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SequenceEndMessage : public DeserializeInterface {
public:
    unsigned int actionId = 0;
    double authorId = 0;
    int sequenceType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _actionIdFunc(CustomDataInput *input);

    void _authorIdFunc(CustomDataInput *input);

    void _sequenceTypeFunc(CustomDataInput *input);
};

#endif