#ifndef FINISHMOVELISTREQUESTMESSAGE_H
#define FINISHMOVELISTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FinishMoveListRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif