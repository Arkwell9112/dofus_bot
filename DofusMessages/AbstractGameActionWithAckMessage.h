#ifndef ABSTRACTGAMEACTIONWITHACKMESSAGE_H
#define ABSTRACTGAMEACTIONWITHACKMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AbstractGameActionWithAckMessage : public AbstractGameActionMessage {
public:
    int waitAckId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _waitAckIdFunc(CustomDataInput *input);
};

#endif