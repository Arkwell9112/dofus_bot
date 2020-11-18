#ifndef VERSION_H
#define VERSION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class Version : public DeserializeInterface {
public:
    unsigned int major = 0;
    unsigned int minor = 0;
    unsigned int code = 0;
    unsigned int build = 0;
    unsigned int buildType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _majorFunc(CustomDataInput *input);

    void _minorFunc(CustomDataInput *input);

    void _codeFunc(CustomDataInput *input);

    void _buildFunc(CustomDataInput *input);

    void _buildTypeFunc(CustomDataInput *input);
};

#endif