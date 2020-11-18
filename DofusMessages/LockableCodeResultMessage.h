#ifndef LOCKABLECODERESULTMESSAGE_H
#define LOCKABLECODERESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LockableCodeResultMessage : public DeserializeInterface {
public:
    unsigned int result = 0;

    void deserialize(CustomDataInput *input);

private:
    void _resultFunc(CustomDataInput *input);
};

#endif