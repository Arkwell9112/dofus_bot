#ifndef ANOMALYSTATEMESSAGE_H
#define ANOMALYSTATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AnomalyStateMessage : public DeserializeInterface {
public:
    unsigned int subAreaId = 0;
    bool open = false;
    double closingTime = 0;

    void deserialize(CustomDataInput *input);

private:
    void _subAreaIdFunc(CustomDataInput *input);

    void _openFunc(CustomDataInput *input);

    void _closingTimeFunc(CustomDataInput *input);
};

#endif