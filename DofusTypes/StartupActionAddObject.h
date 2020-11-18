#ifndef STARTUPACTIONADDOBJECT_H
#define STARTUPACTIONADDOBJECT_H

#include "ObjectItemInformationWithQuantity.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StartupActionAddObject : public DeserializeInterface {
public:
    unsigned int uid = 0;
    std::string title;
    std::string text;
    std::string descUrl;
    std::string pictureUrl;
    std::vector<ObjectItemInformationWithQuantity> items;

    void deserialize(CustomDataInput *input);

private:
    void _uidFunc(CustomDataInput *input);

    void _titleFunc(CustomDataInput *input);

    void _textFunc(CustomDataInput *input);

    void _descUrlFunc(CustomDataInput *input);

    void _pictureUrlFunc(CustomDataInput *input);
};

#endif