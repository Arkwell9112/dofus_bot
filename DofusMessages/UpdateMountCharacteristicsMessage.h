#ifndef UPDATEMOUNTCHARACTERISTICSMESSAGE_H
#define UPDATEMOUNTCHARACTERISTICSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/UpdateMountCharacteristic.h"

#include <string>
#include <vector>

class UpdateMountCharacteristicsMessage : public DeserializeInterface {
public:
    int rideId = 0;
    std::vector<UpdateMountCharacteristic> boostToUpdateList;

    void deserialize(CustomDataInput *input);

private:
    void _rideIdFunc(CustomDataInput *input);

    void _boostToUpdateListFunc(CustomDataInput *input);
};

#endif