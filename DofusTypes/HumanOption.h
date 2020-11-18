#ifndef HUMANOPTION_H
#define HUMANOPTION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HumanOption : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif