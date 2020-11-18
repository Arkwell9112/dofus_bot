#ifndef PORTALINFORMATION_H
#define PORTALINFORMATION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PortalInformation : public DeserializeInterface {
public:
    int portalId = 0;
    int areaId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _portalIdFunc(CustomDataInput *input);

    void _areaIdFunc(CustomDataInput *input);
};

#endif