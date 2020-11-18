#ifndef MIMICRYOBJECTFEEDANDASSOCIATEREQUESTMESSAGE_H
#define MIMICRYOBJECTFEEDANDASSOCIATEREQUESTMESSAGE_H

#include "SymbioticObjectAssociateRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MimicryObjectFeedAndAssociateRequestMessage : public SymbioticObjectAssociateRequestMessage {
public:
    unsigned int foodUID = 0;
    unsigned int foodPos = 0;
    bool preview = false;

    void deserialize(CustomDataInput *input);

private:
    void _foodUIDFunc(CustomDataInput *input);

    void _foodPosFunc(CustomDataInput *input);

    void _previewFunc(CustomDataInput *input);
};

#endif