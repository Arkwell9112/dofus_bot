#ifndef ENTITYMOVEMENTINFORMATIONS_H
#define ENTITYMOVEMENTINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EntityMovementInformations : public DeserializeInterface {
public:
    int id = 0;
    std::vector<int> steps;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _stepsFunc(CustomDataInput *input);
};

#endif