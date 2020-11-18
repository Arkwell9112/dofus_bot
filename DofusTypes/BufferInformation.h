#ifndef BUFFERINFORMATION_H
#define BUFFERINFORMATION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BufferInformation : public DeserializeInterface {
public:
    double id = 0;
    double amount = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _amountFunc(CustomDataInput *input);
};

#endif