#ifndef CHANGETHEMEREQUESTMESSAGE_H
#define CHANGETHEMEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChangeThemeRequestMessage : public DeserializeInterface {
public:
    int theme = 0;

    void deserialize(CustomDataInput *input);

private:
    void _themeFunc(CustomDataInput *input);
};

#endif