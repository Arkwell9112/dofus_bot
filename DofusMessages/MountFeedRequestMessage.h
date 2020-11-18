#ifndef MOUNTFEEDREQUESTMESSAGE_H
#define MOUNTFEEDREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountFeedRequestMessage : public DeserializeInterface {
public:
    unsigned int mountUid = 0;
    int mountLocation = 0;
    unsigned int mountFoodUid = 0;
    unsigned int quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _mountUidFunc(CustomDataInput *input);

    void _mountLocationFunc(CustomDataInput *input);

    void _mountFoodUidFunc(CustomDataInput *input);

    void _quantityFunc(CustomDataInput *input);
};

#endif