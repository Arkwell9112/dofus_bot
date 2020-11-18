#include "GuildBulletinMessage.h"
#include "BulletinMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildBulletinMessage::deserialize(CustomDataInput *input) {
    BulletinMessage::deserialize(input);
}