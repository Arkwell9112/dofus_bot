#ifndef HAVENBAGPERMISSIONSUPDATEREQUESTMESSAGE_H
#define HAVENBAGPERMISSIONSUPDATEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HavenBagPermissionsUpdateRequestMessage : public DeserializeInterface {
public:
    unsigned int permissions = 0;

    void deserialize(CustomDataInput *input);

private:
    void _permissionsFunc(CustomDataInput *input);
};

#endif