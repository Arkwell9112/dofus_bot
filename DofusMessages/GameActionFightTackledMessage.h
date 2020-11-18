#ifndef GAMEACTIONFIGHTTACKLEDMESSAGE_H
#define GAMEACTIONFIGHTTACKLEDMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightTackledMessage : public AbstractGameActionMessage {
public:
    std::vector<double> tacklersIds;

    void deserialize(CustomDataInput *input);

private:
    void _tacklersIdsFunc(CustomDataInput *input);
};

#endif