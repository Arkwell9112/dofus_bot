#ifndef FINISHMOVESETREQUESTMESSAGE_H
#define FINISHMOVESETREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FinishMoveSetRequestMessage : public DeserializeInterface {
public:
    unsigned int finishMoveId = 0;
    bool finishMoveState = false;

    void deserialize(CustomDataInput *input);

private:
    void _finishMoveIdFunc(CustomDataInput *input);

    void _finishMoveStateFunc(CustomDataInput *input);
};

#endif