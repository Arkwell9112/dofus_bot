#ifndef ALIGNMENTRANKUPDATEMESSAGE_H
#define ALIGNMENTRANKUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AlignmentRankUpdateMessage : public DeserializeInterface {
public:
    unsigned int alignmentRank = 0;
    bool verbose = false;

    void deserialize(CustomDataInput *input);

private:
    void _alignmentRankFunc(CustomDataInput *input);

    void _verboseFunc(CustomDataInput *input);
};

#endif