#ifndef MAPRUNNINGFIGHTDETAILSMESSAGE_H
#define MAPRUNNINGFIGHTDETAILSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameFightFighterLightInformations.h"

#include <string>
#include <vector>

class MapRunningFightDetailsMessage : public DeserializeInterface {
public:
    unsigned int fightId = 0;
    std::vector<GameFightFighterLightInformations> attackers;
    std::vector<GameFightFighterLightInformations> defenders;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);

    void _attackersFunc(CustomDataInput *input);

    void _defendersFunc(CustomDataInput *input);
};

#endif