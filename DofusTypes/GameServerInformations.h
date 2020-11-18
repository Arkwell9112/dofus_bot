#ifndef GAMESERVERINFORMATIONS_H
#define GAMESERVERINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameServerInformations : public DeserializeInterface {
public:
    unsigned int id = 0;
    int type = -1;
    bool isMonoAccount = false;
    unsigned int status = 1;
    unsigned int completion = 0;
    bool isSelectable = false;
    unsigned int charactersCount = 0;
    unsigned int charactersSlots = 0;
    double date = 0;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _idFunc(CustomDataInput *input);

    void _typeFunc(CustomDataInput *input);

    void _statusFunc(CustomDataInput *input);

    void _completionFunc(CustomDataInput *input);

    void _charactersCountFunc(CustomDataInput *input);

    void _charactersSlotsFunc(CustomDataInput *input);

    void _dateFunc(CustomDataInput *input);
};

#endif