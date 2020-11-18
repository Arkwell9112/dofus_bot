#include "PrismsListUpdateMessage.h"
#include "PrismsListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismsListUpdateMessage::deserialize(CustomDataInput *input) {
    PrismsListMessage::deserialize(input);
}