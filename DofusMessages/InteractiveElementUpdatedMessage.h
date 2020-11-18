#ifndef INTERACTIVEELEMENTUPDATEDMESSAGE_H
#define INTERACTIVEELEMENTUPDATEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/InteractiveElement.h"

#include <string>
#include <vector>

class InteractiveElementUpdatedMessage : public DeserializeInterface {
public:
    InteractiveElement interactiveElement;

    void deserialize(CustomDataInput *input);

private:
};

#endif