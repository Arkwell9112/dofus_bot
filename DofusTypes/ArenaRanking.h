#ifndef ARENARANKING_H
#define ARENARANKING_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ArenaRanking : public DeserializeInterface {
public:
    unsigned int rank = 0;
    unsigned int bestRank = 0;

    void deserialize(CustomDataInput *input);

private:
    void _rankFunc(CustomDataInput *input);

    void _bestRankFunc(CustomDataInput *input);
};

#endif