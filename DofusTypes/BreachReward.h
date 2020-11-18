#ifndef BREACHREWARD_H
#define BREACHREWARD_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachReward : public DeserializeInterface {
public:
    unsigned int id = 0;
    std::vector<unsigned int> buyLocks;
    std::string buyCriterion;
    int remainingQty = 0;
    unsigned int price = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _buyLocksFunc(CustomDataInput *input);

    void _buyCriterionFunc(CustomDataInput *input);

    void _remainingQtyFunc(CustomDataInput *input);

    void _priceFunc(CustomDataInput *input);
};

#endif