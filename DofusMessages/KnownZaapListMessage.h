#ifndef KNOWNZAAPLISTMESSAGE_H
#define KNOWNZAAPLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class KnownZaapListMessage : public DeserializeInterface {
public:
    std::vector<double> destinations;

    void deserialize(CustomDataInput *input);

private:
    void _destinationsFunc(CustomDataInput *input);
};

#endif