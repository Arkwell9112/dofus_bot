#ifndef NPCDIALOGQUESTIONMESSAGE_H
#define NPCDIALOGQUESTIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NpcDialogQuestionMessage : public DeserializeInterface {
public:
    unsigned int messageId = 0;
    std::vector<std::string> dialogParams;
    std::vector<unsigned int> visibleReplies;

    void deserialize(CustomDataInput *input);

private:
    void _messageIdFunc(CustomDataInput *input);

    void _dialogParamsFunc(CustomDataInput *input);

    void _visibleRepliesFunc(CustomDataInput *input);
};

#endif