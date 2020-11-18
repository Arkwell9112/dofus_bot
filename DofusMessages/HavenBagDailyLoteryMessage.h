#ifndef HAVENBAGDAILYLOTERYMESSAGE_H
#define HAVENBAGDAILYLOTERYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HavenBagDailyLoteryMessage : public DeserializeInterface {
public:
    unsigned int returnType = 0;
    std::string gameActionId;

    void deserialize(CustomDataInput *input);

private:
    void _returnTypeFunc(CustomDataInput *input);

    void _gameActionIdFunc(CustomDataInput *input);
};

#endif