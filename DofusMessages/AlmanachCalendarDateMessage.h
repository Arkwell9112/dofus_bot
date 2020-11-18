#ifndef ALMANACHCALENDARDATEMESSAGE_H
#define ALMANACHCALENDARDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AlmanachCalendarDateMessage : public DeserializeInterface {
public:
    int date = 0;

    void deserialize(CustomDataInput *input);

private:
    void _dateFunc(CustomDataInput *input);
};

#endif