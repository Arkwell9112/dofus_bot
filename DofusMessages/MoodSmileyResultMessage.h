#ifndef MOODSMILEYRESULTMESSAGE_H
#define MOODSMILEYRESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MoodSmileyResultMessage : public DeserializeInterface {
public:
    unsigned int resultCode = 1;
    unsigned int smileyId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _resultCodeFunc(CustomDataInput *input);

    void _smileyIdFunc(CustomDataInput *input);
};

#endif