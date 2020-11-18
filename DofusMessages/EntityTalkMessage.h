#ifndef ENTITYTALKMESSAGE_H
#define ENTITYTALKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EntityTalkMessage : public DeserializeInterface {
public:
    double entityId = 0;
    unsigned int textId = 0;
    std::vector<std::string> parameters;

    void deserialize(CustomDataInput *input);

private:
    void _entityIdFunc(CustomDataInput *input);

    void _textIdFunc(CustomDataInput *input);

    void _parametersFunc(CustomDataInput *input);
};

#endif