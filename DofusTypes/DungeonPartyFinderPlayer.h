#ifndef DUNGEONPARTYFINDERPLAYER_H
#define DUNGEONPARTYFINDERPLAYER_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DungeonPartyFinderPlayer : public DeserializeInterface {
public:
    double playerId = 0;
    std::string playerName;
    int breed = 0;
    bool sex = false;
    unsigned int level = 0;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);

    void _playerNameFunc(CustomDataInput *input);

    void _breedFunc(CustomDataInput *input);

    void _sexFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);
};

#endif