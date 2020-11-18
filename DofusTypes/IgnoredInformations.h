#ifndef IGNOREDINFORMATIONS_H
#define IGNOREDINFORMATIONS_H

#include "AbstractContactInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class IgnoredInformations : public AbstractContactInformations {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif