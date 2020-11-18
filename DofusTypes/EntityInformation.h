#ifndef ENTITYINFORMATION_H
#define ENTITYINFORMATION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EntityInformation : public DeserializeInterface {
public:
    unsigned int id = 0;
    unsigned int experience = 0;
    bool status = false;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _experienceFunc(CustomDataInput *input);

    void _statusFunc(CustomDataInput *input);
};

#endif