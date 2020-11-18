#ifndef BASICSTATMESSAGE_H
#define BASICSTATMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BasicStatMessage : public DeserializeInterface {
public:
    double timeSpent = 0;
    unsigned int statId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _timeSpentFunc(CustomDataInput *input);

    void _statIdFunc(CustomDataInput *input);
};

#endif