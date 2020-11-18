#ifndef POPUPWARNINGMESSAGE_H
#define POPUPWARNINGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PopupWarningMessage : public DeserializeInterface {
public:
    unsigned int lockDuration = 0;
    std::string author;
    std::string content;

    void deserialize(CustomDataInput *input);

private:
    void _lockDurationFunc(CustomDataInput *input);

    void _authorFunc(CustomDataInput *input);

    void _contentFunc(CustomDataInput *input);
};

#endif