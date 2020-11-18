#ifndef BASICDATEMESSAGE_H
#define BASICDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BasicDateMessage : public DeserializeInterface {
public:
    unsigned int day = 0;
    unsigned int month = 0;
    unsigned int year = 0;

    void deserialize(CustomDataInput *input);

private:
    void _dayFunc(CustomDataInput *input);

    void _monthFunc(CustomDataInput *input);

    void _yearFunc(CustomDataInput *input);
};

#endif