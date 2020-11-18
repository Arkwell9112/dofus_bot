#ifndef HUMANOPTIONTITLE_H
#define HUMANOPTIONTITLE_H

#include "HumanOption.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HumanOptionTitle : public HumanOption {
public:
    unsigned int titleId = 0;
    std::string titleParam;

    void deserialize(CustomDataInput *input);

private:
    void _titleIdFunc(CustomDataInput *input);

    void _titleParamFunc(CustomDataInput *input);
};

#endif