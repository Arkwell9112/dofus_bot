#ifndef INTERACTIVEMAPUPDATEMESSAGE_H
#define INTERACTIVEMAPUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/InteractiveElement.h"

#include <string>
#include <vector>

class InteractiveMapUpdateMessage : public DeserializeInterface {
public:
    std::vector<InteractiveElement> interactiveElements;

    void deserialize(CustomDataInput *input);

private:
    void _interactiveElementsFunc(CustomDataInput *input);
};

#endif