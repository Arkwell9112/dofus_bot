#include "BulletinMessage.h"
#include "AllianceBulletinMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceBulletinMessage::deserialize(CustomDataInput *input) {
    BulletinMessage::deserialize(input);
}