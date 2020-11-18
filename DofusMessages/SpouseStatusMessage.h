#ifndef SPOUSESTATUSMESSAGE_H
#define SPOUSESTATUSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SpouseStatusMessage : public DeserializeInterface {
public:
    bool hasSpouse = false;

    void deserialize(CustomDataInput *input);

private:
    void _hasSpouseFunc(CustomDataInput *input);
};

#endif