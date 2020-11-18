#ifndef EXCHANGEONHUMANVENDORREQUESTMESSAGE_H
#define EXCHANGEONHUMANVENDORREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeOnHumanVendorRequestMessage : public DeserializeInterface {
public:
    double humanVendorId = 0;
    unsigned int humanVendorCell = 0;

    void deserialize(CustomDataInput *input);

private:
    void _humanVendorIdFunc(CustomDataInput *input);

    void _humanVendorCellFunc(CustomDataInput *input);
};

#endif