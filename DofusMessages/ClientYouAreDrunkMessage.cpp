#include "DebugInClientMessage.h"
#include "ClientYouAreDrunkMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ClientYouAreDrunkMessage::deserialize(CustomDataInput *input) {
    DebugInClientMessage::deserialize(input);
}