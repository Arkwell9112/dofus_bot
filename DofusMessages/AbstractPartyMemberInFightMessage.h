#ifndef ABSTRACTPARTYMEMBERINFIGHTMESSAGE_H
#define ABSTRACTPARTYMEMBERINFIGHTMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AbstractPartyMemberInFightMessage : public AbstractPartyMessage {
public:
    unsigned int reason = 0;
    double memberId = 0;
    unsigned int memberAccountId = 0;
    std::string memberName;
    unsigned int fightId = 0;
    int timeBeforeFightStart = 0;

    void deserialize(CustomDataInput *input);

private:
    void _reasonFunc(CustomDataInput *input);

    void _memberIdFunc(CustomDataInput *input);

    void _memberAccountIdFunc(CustomDataInput *input);

    void _memberNameFunc(CustomDataInput *input);

    void _fightIdFunc(CustomDataInput *input);

    void _timeBeforeFightStartFunc(CustomDataInput *input);
};

#endif