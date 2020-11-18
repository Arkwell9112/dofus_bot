#ifndef PRISMFIGHTDEFENDERLEAVEMESSAGE_H
#define PRISMFIGHTDEFENDERLEAVEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismFightDefenderLeaveMessage : public DeserializeInterface {
public:
    unsigned int subAreaId = 0;
    unsigned int fightId = 0;
    double fighterToRemoveId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _subAreaIdFunc(CustomDataInput *input);

    void _fightIdFunc(CustomDataInput *input);

    void _fighterToRemoveIdFunc(CustomDataInput *input);
};

#endif