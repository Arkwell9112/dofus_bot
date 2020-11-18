#ifndef IGNOREDLISTMESSAGE_H
#define IGNOREDLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/IgnoredInformations.h"

#include <string>
#include <vector>

class IgnoredListMessage : public DeserializeInterface {
public:
    std::vector<IgnoredInformations> ignoredList;

    void deserialize(CustomDataInput *input);

private:
    void _ignoredListFunc(CustomDataInput *input);
};

#endif