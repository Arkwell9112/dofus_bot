#ifndef HOUSETOSELLLISTMESSAGE_H
#define HOUSETOSELLLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/HouseInformationsForSell.h"

#include "../DofusTypes/HouseInformations.h"

#include <string>
#include <vector>

class HouseToSellListMessage : public DeserializeInterface {
public:
    unsigned int pageIndex = 0;
    unsigned int totalPage = 0;
    std::vector<HouseInformationsForSell> houseList;

    void deserialize(CustomDataInput *input);

private:
    void _pageIndexFunc(CustomDataInput *input);

    void _totalPageFunc(CustomDataInput *input);
};

#endif