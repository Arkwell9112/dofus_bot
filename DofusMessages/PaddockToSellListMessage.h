#ifndef PADDOCKTOSELLLISTMESSAGE_H
#define PADDOCKTOSELLLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PaddockInformationsForSell.h"

#include "../DofusTypes/PaddockInformations.h"

#include <string>
#include <vector>

class PaddockToSellListMessage : public DeserializeInterface {
public:
    unsigned int pageIndex = 0;
    unsigned int totalPage = 0;
    std::vector<PaddockInformationsForSell> paddockList;

    void deserialize(CustomDataInput *input);

private:
    void _pageIndexFunc(CustomDataInput *input);

    void _totalPageFunc(CustomDataInput *input);
};

#endif