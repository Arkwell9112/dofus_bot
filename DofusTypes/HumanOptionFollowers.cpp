#include "IndexedEntityLook.h"
#include "HumanOptionFollowers.h"
#include "HumanOption.h"
#include "EntityLook.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HumanOptionFollowers::deserialize(CustomDataInput *input) {
    IndexedEntityLook _item1;
    HumanOption::deserialize(input);
    unsigned int _followingCharactersLookLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _followingCharactersLookLen; _i1++) {
        _item1.deserialize(input);
        this->followingCharactersLook.push_back(_item1);
    }
}