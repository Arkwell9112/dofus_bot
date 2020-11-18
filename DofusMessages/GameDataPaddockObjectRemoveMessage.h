#ifndef GAMEDATAPADDOCKOBJECTREMOVEMESSAGE_H
#define GAMEDATAPADDOCKOBJECTREMOVEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameDataPaddockObjectRemoveMessage : public DeserializeInterface {
public:
    unsigned int cellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cellIdFunc(CustomDataInput *input);
};

#endif