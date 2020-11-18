#ifndef CHARACTERCANBECREATEDRESULTMESSAGE_H
#define CHARACTERCANBECREATEDRESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterCanBeCreatedResultMessage : public DeserializeInterface {
public:
    bool yesYouCan = false;

    void deserialize(CustomDataInput *input);

private:
    void _yesYouCanFunc(CustomDataInput *input);
};

#endif