#ifndef STATEDELEMENTUPDATEDMESSAGE_H
#define STATEDELEMENTUPDATEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/StatedElement.h"

#include <string>
#include <vector>

class StatedElementUpdatedMessage : public DeserializeInterface {
public:
    StatedElement statedElement;

    void deserialize(CustomDataInput *input);

private:
};

#endif