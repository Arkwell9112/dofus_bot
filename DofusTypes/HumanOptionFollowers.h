#ifndef HUMANOPTIONFOLLOWERS_H
#define HUMANOPTIONFOLLOWERS_H

#include "IndexedEntityLook.h"
#include "HumanOption.h"
#include "EntityLook.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HumanOptionFollowers : public HumanOption {
public:
    std::vector<IndexedEntityLook> followingCharactersLook;

    void deserialize(CustomDataInput *input);

private:
};

#endif