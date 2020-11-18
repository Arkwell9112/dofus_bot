#ifndef PADDOCKCONTENTINFORMATIONS_H
#define PADDOCKCONTENTINFORMATIONS_H

#include "PaddockInformations.h"
#include "MountInformationsForPaddock.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PaddockContentInformations : public PaddockInformations {
public:
    double paddockId = 0;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    bool abandonned = false;
    std::vector<MountInformationsForPaddock> mountsInformations;

    void deserialize(CustomDataInput *input);

private:
    void _paddockIdFunc(CustomDataInput *input);

    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _mapIdFunc(CustomDataInput *input);

    void _subAreaIdFunc(CustomDataInput *input);

    void _abandonnedFunc(CustomDataInput *input);
};

#endif