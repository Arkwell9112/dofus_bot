#ifndef ALLIANCEPRISMDIALOGQUESTIONMESSAGE_H
#define ALLIANCEPRISMDIALOGQUESTIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AlliancePrismDialogQuestionMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif