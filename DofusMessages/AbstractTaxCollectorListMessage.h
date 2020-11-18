#ifndef ABSTRACTTAXCOLLECTORLISTMESSAGE_H
#define ABSTRACTTAXCOLLECTORLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TaxCollectorInformations.h"

#include <string>
#include <vector>

class AbstractTaxCollectorListMessage : public DeserializeInterface {
public:
    std::vector<TaxCollectorInformations> informations;

    void deserialize(CustomDataInput *input);

private:
    void _informationsFunc(CustomDataInput *input);
};

#endif