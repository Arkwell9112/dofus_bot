#include "GuildMembershipMessage.h"
#include "GuildJoinedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildMember.h"

void GuildMembershipMessage::deserialize(CustomDataInput *input) {
    GuildJoinedMessage::deserialize(input);
}