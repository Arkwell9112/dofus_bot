#ifndef GAMEMAPCHANGEORIENTATIONSMESSAGE_H
#define GAMEMAPCHANGEORIENTATIONSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ActorOrientation.h"

#include <string>
#include <vector>

class GameMapChangeOrientationsMessage : public DeserializeInterface {
public:
    std::vector<ActorOrientation> orientations;

    void deserialize(CustomDataInput *input);

private:
};

#endif