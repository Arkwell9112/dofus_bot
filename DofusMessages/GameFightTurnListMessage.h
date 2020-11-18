#ifndef GAMEFIGHTTURNLISTMESSAGE_H
#define GAMEFIGHTTURNLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightTurnListMessage : public DeserializeInterface {
public:
    std::vector<double> ids;
    std::vector<double> deadsIds;

    void deserialize(CustomDataInput *input);

private:
    void _idsFunc(CustomDataInput *input);

    void _deadsIdsFunc(CustomDataInput *input);
};

#endif