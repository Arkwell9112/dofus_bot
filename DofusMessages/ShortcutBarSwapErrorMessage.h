#ifndef SHORTCUTBARSWAPERRORMESSAGE_H
#define SHORTCUTBARSWAPERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Shortcut.h"

#include <string>
#include <vector>

class ShortcutBarSwapErrorMessage : public DeserializeInterface {
public:
    unsigned int error = 0;

    void deserialize(CustomDataInput *input);

private:
    void _errorFunc(CustomDataInput *input);
};

#endif