#ifndef BASICTIMEMESSAGE_H
#define BASICTIMEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BasicTimeMessage : public DeserializeInterface {
public:
    double timestamp = 0;
    int timezoneOffset = 0;

    void deserialize(CustomDataInput *input);

private:
    void _timestampFunc(CustomDataInput *input);

    void _timezoneOffsetFunc(CustomDataInput *input);
};

#endif