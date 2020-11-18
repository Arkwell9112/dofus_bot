#ifndef GUILDINVITATIonAnsWERMESSAGE_H
#define GUILDINVITATIonAnsWERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildInvitationAnswerMessage : public DeserializeInterface {
public:
    bool accept = false;

    void deserialize(CustomDataInput *input);

private:
    void _acceptFunc(CustomDataInput *input);
};

#endif