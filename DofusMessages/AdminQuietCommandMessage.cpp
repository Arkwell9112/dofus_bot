#include "AdminQuietCommandMessage.h"
#include "AdminCommandMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AdminQuietCommandMessage::deserialize(CustomDataInput *input) {
    AdminCommandMessage::deserialize(input);
}