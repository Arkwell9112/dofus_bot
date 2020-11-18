#include "ChatServerMessage.h"
#include "ChatAdminServerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChatAdminServerMessage::deserialize(CustomDataInput *input) {
    ChatServerMessage::deserialize(input);
}