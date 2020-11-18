#ifndef FINISHMOVELISTMESSAGE_H
#define FINISHMOVELISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/FinishMoveInformations.h"

#include <string>
#include <vector>

class FinishMoveListMessage : public DeserializeInterface {
public:
    std::vector<FinishMoveInformations> finishMoves;

    void deserialize(CustomDataInput *input);

private:
};

#endif