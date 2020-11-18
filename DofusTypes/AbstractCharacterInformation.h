#ifndef ABSTRACTCHARACTERINFORMATION_H
#define ABSTRACTCHARACTERINFORMATION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AbstractCharacterInformation : public DeserializeInterface {
public:
    double id = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);
};

#endif