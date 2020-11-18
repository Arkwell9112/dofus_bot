#ifndef PRISMINFOCLOSEMESSAGE_H
#define PRISMINFOCLOSEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismInfoCloseMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif