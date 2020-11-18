#ifndef PADDOCKTOSELLLISTREQUESTMESSAGE_H
#define PADDOCKTOSELLLISTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PaddockToSellListRequestMessage : public DeserializeInterface {
public:
    unsigned int pageIndex = 0;

    void deserialize(CustomDataInput *input);

private:
    void _pageIndexFunc(CustomDataInput *input);
};

#endif