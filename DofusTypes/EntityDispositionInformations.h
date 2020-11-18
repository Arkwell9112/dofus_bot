#ifndef ENTITYDISPOSITIONINFORMATIONS_H
#define ENTITYDISPOSITIONINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EntityDispositionInformations : public DeserializeInterface {
public:
    int cellId = 0;
    unsigned int direction = 1;

    void deserialize(CustomDataInput *input);

private:
    void _cellIdFunc(CustomDataInput *input);

    void _directionFunc(CustomDataInput *input);
};

#endif