#ifndef ALLIANCEINVITATIonAnsWERMESSAGE_H
#define ALLIANCEINVITATIonAnsWERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceInvitationAnswerMessage : public DeserializeInterface {
public:
    bool accept = false;

    void deserialize(CustomDataInput *input);

private:
    void _acceptFunc(CustomDataInput *input);
};

#endif