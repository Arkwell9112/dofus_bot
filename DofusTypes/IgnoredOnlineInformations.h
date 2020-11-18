#ifndef IGNOREDONLINEINFORMATIONS_H
#define IGNOREDONLINEINFORMATIONS_H

#include "IgnoredInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class IgnoredOnlineInformations : public IgnoredInformations {
public:
    double playerId = 0;
    std::string playerName;
    int breed = 0;
    bool sex = false;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);

    void _playerNameFunc(CustomDataInput *input);

    void _breedFunc(CustomDataInput *input);

    void _sexFunc(CustomDataInput *input);
};

#endif