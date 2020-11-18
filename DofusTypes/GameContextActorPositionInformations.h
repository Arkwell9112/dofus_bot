#ifndef GAMECONTEXTACTORPOSITIONINFORMATIONS_H
#define GAMECONTEXTACTORPOSITIONINFORMATIONS_H

#include "EntityDispositionInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameContextActorPositionInformations : public DeserializeInterface {
public:
    double contextualId = 0;
    EntityDispositionInformations disposition;

    void deserialize(CustomDataInput *input);

private:
    void _contextualIdFunc(CustomDataInput *input);
};

#endif