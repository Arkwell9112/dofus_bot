#ifndef PRISMGEOLOCALIZEDINFORMATION_H
#define PRISMGEOLOCALIZEDINFORMATION_H

#include "PrismSubareaEmptyInfo.h"
#include "PrismInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismGeolocalizedInformation : public PrismSubareaEmptyInfo {
public:
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    PrismInformation prism;

    void deserialize(CustomDataInput *input);

private:
    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _mapIdFunc(CustomDataInput *input);
};

#endif