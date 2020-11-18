#ifndef ABSTRACTSOCIALGROUPINFOS_H
#define ABSTRACTSOCIALGROUPINFOS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AbstractSocialGroupInfos : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif