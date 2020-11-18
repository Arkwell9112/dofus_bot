#ifndef CHALLENGETARGETSLISTMESSAGE_H
#define CHALLENGETARGETSLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChallengeTargetsListMessage : public DeserializeInterface {
public:
    std::vector<double> targetIds;
    std::vector<int> targetCells;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdsFunc(CustomDataInput *input);

    void _targetCellsFunc(CustomDataInput *input);
};

#endif