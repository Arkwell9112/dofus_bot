#ifndef JOBCRAFTERDIRECTORYENTRYPLAYERINFO_H
#define JOBCRAFTERDIRECTORYENTRYPLAYERINFO_H

#include "PlayerStatus.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class JobCrafterDirectoryEntryPlayerInfo : public DeserializeInterface {
public:
    double playerId = 0;
    std::string playerName;
    int alignmentSide = 0;
    int breed = 0;
    bool sex = false;
    bool isInWorkshop = false;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    bool canCraftLegendary = false;
    PlayerStatus status;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);

    void _playerNameFunc(CustomDataInput *input);

    void _alignmentSideFunc(CustomDataInput *input);

    void _breedFunc(CustomDataInput *input);

    void _sexFunc(CustomDataInput *input);

    void _isInWorkshopFunc(CustomDataInput *input);

    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _mapIdFunc(CustomDataInput *input);

    void _subAreaIdFunc(CustomDataInput *input);

    void _canCraftLegendaryFunc(CustomDataInput *input);
};

#endif