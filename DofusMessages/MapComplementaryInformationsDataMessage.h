#ifndef MAPCOMPLEMENTARYINFORMATIONSDATAMESSAGE_H
#define MAPCOMPLEMENTARYINFORMATIONSDATAMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/StatedElement.h"

#include "../DofusTypes/MapObstacle.h"

#include "../DofusTypes/InteractiveElement.h"

#include "../DofusTypes/HouseInformations.h"

#include "../DofusTypes/GameRolePlayActorInformations.h"

#include "../DofusTypes/FightStartingPositions.h"

#include "../DofusTypes/FightCommonInformations.h"

#include <string>
#include <vector>

class MapComplementaryInformationsDataMessage : public DeserializeInterface {
public:
    unsigned int subAreaId = 0;
    double mapId = 0;
    std::vector<HouseInformations> houses;
    std::vector<GameRolePlayActorInformations> actors;
    std::vector<InteractiveElement> interactiveElements;
    std::vector<StatedElement> statedElements;
    std::vector<MapObstacle> obstacles;
    std::vector<FightCommonInformations> fights;
    bool hasAggressiveMonsters = false;
    FightStartingPositions fightStartPositions;

    void deserialize(CustomDataInput *input);

private:
    void _subAreaIdFunc(CustomDataInput *input);

    void _mapIdFunc(CustomDataInput *input);

    void _housesFunc(CustomDataInput *input);

    void _actorsFunc(CustomDataInput *input);

    void _interactiveElementsFunc(CustomDataInput *input);

    void _hasAggressiveMonstersFunc(CustomDataInput *input);
};

#endif