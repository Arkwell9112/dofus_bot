#ifndef HUMANOPTIONEMOTE_H
#define HUMANOPTIONEMOTE_H

#include "HumanOption.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HumanOptionEmote : public HumanOption {
public:
    unsigned int emoteId = 0;
    double emoteStartTime = 0;

    void deserialize(CustomDataInput *input);

private:
    void _emoteIdFunc(CustomDataInput *input);

    void _emoteStartTimeFunc(CustomDataInput *input);
};

#endif