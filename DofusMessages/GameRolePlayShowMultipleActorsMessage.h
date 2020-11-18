#ifndef GAMEROLEPLAYSHOWMULTIPLEACTORSMESSAGE_H
#define GAMEROLEPLAYSHOWMULTIPLEACTORSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameRolePlayActorInformations.h"

#include <string>
#include <vector>

class GameRolePlayShowMultipleActorsMessage : public DeserializeInterface {
public:
    std::vector<GameRolePlayActorInformations> informationsList;

    void deserialize(CustomDataInput *input);

private:
    void _informationsListFunc(CustomDataInput *input);
};

#endif