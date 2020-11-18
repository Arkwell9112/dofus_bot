#ifndef EXCHANGEGUILDTAXCOLLECTORGETMESSAGE_H
#define EXCHANGEGUILDTAXCOLLECTORGETMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemGenericQuantity.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeGuildTaxCollectorGetMessage : public DeserializeInterface {
public:
    std::string collectorName;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    std::string userName;
    double callerId = 0;
    std::string callerName;
    double experience = 0;
    unsigned int pods = 0;
    std::vector<ObjectItemGenericQuantity> objectsInfos;

    void deserialize(CustomDataInput *input);

private:
    void _collectorNameFunc(CustomDataInput *input);

    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _mapIdFunc(CustomDataInput *input);

    void _subAreaIdFunc(CustomDataInput *input);

    void _userNameFunc(CustomDataInput *input);

    void _callerIdFunc(CustomDataInput *input);

    void _callerNameFunc(CustomDataInput *input);

    void _experienceFunc(CustomDataInput *input);

    void _podsFunc(CustomDataInput *input);
};

#endif