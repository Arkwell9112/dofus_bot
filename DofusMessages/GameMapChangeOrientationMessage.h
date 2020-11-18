#ifndef GAMEMAPCHANGEORIENTATIONMESSAGE_H
#define GAMEMAPCHANGEORIENTATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ActorOrientation.h"

#include <string>
#include <vector>

class GameMapChangeOrientationMessage : public DeserializeInterface {
public:
    ActorOrientation orientation;

    void deserialize(CustomDataInput *input);

private:
};

#endif