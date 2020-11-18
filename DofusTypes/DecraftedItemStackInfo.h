#ifndef DECRAFTEDITEMSTACKINFO_H
#define DECRAFTEDITEMSTACKINFO_H

#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DecraftedItemStackInfo : public DeserializeInterface {
public:
    unsigned int objectUID = 0;
    double bonusMin = 0;
    double bonusMax = 0;
    std::vector<unsigned int> runesId;
    std::vector<unsigned int> runesQty;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);

    void _bonusMinFunc(CustomDataInput *input);

    void _bonusMaxFunc(CustomDataInput *input);

    void _runesIdFunc(CustomDataInput *input);

    void _runesQtyFunc(CustomDataInput *input);
};

#endif