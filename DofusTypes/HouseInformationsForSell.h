#ifndef HOUSEINFORMATIONSFORSELL_H
#define HOUSEINFORMATIONSFORSELL_H

#include "HouseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseInformationsForSell : public DeserializeInterface {
public:
    unsigned int instanceId = 0;
    bool secondHand = false;
    unsigned int modelId = 0;
    unsigned int ownerAccountId = 0;
    std::string ownerName;
    std::string ownerCharacterName;
    int worldX = 0;
    int worldY = 0;
    unsigned int subAreaId = 0;
    int nbRoom = 0;
    int nbChest = 0;
    std::vector<int> skillListIds;
    bool isLocked = false;
    double price = 0;

    void deserialize(CustomDataInput *input);

private:
    void _instanceIdFunc(CustomDataInput *input);

    void _secondHandFunc(CustomDataInput *input);

    void _modelIdFunc(CustomDataInput *input);

    void _ownerAccountIdFunc(CustomDataInput *input);

    void _ownerNameFunc(CustomDataInput *input);

    void _ownerCharacterNameFunc(CustomDataInput *input);

    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _subAreaIdFunc(CustomDataInput *input);

    void _nbRoomFunc(CustomDataInput *input);

    void _nbChestFunc(CustomDataInput *input);

    void _skillListIdsFunc(CustomDataInput *input);

    void _isLockedFunc(CustomDataInput *input);

    void _priceFunc(CustomDataInput *input);
};

#endif