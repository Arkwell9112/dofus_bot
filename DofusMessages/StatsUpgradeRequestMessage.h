#ifndef STATSUPGRADEREQUESTMESSAGE_H
#define STATSUPGRADEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StatsUpgradeRequestMessage : public DeserializeInterface {
public:
    bool useAdditionnal = false;
    unsigned int statId = 11;
    unsigned int boostPoint = 0;

    void deserialize(CustomDataInput *input);

private:
    void _useAdditionnalFunc(CustomDataInput *input);

    void _statIdFunc(CustomDataInput *input);

    void _boostPointFunc(CustomDataInput *input);
};

#endif