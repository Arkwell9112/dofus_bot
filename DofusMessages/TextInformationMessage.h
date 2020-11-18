#ifndef TEXTINFORMATIONMESSAGE_H
#define TEXTINFORMATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TextInformationMessage : public DeserializeInterface {
public:
    unsigned int msgType = 0;
    unsigned int msgId = 0;
    std::vector<std::string> parameters;

    void deserialize(CustomDataInput *input);

private:
    void _msgTypeFunc(CustomDataInput *input);

    void _msgIdFunc(CustomDataInput *input);

    void _parametersFunc(CustomDataInput *input);
};

#endif