#ifndef CHECKFILEREQUESTMESSAGE_H
#define CHECKFILEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CheckFileRequestMessage : public DeserializeInterface {
public:
    std::string filename;
    unsigned int type = 0;

    void deserialize(CustomDataInput *input);

private:
    void _filenameFunc(CustomDataInput *input);

    void _typeFunc(CustomDataInput *input);
};

#endif