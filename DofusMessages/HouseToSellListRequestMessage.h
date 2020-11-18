#ifndef HOUSETOSELLLISTREQUESTMESSAGE_H
#define HOUSETOSELLLISTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseToSellListRequestMessage : public DeserializeInterface {
public:
    unsigned int pageIndex = 0;

    void deserialize(CustomDataInput *input);

private:
    void _pageIndexFunc(CustomDataInput *input);
};

#endif