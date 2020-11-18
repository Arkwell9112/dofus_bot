#include "TaxCollectorStaticInformations.h"
#include "TaxCollectorInformations.h"
#include "GameRolePlayTaxCollectorInformations.h"
#include "GameRolePlayActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayTaxCollectorInformations::deserialize(CustomDataInput *input) {
    GameRolePlayActorInformations::deserialize(input);
    unsigned int _id1 = input->readUnsignedShort();
    this->identification = *dynamic_cast<TaxCollectorStaticInformations *>(ProtocolTypeManager::getInstance(_id1,
                                                                                                            input));
    ProtocolTypeManager::deleteLastInstance();

    this->_guildLevelFunc(input);
    this->_taxCollectorAttackFunc(input);
}

void GameRolePlayTaxCollectorInformations::_guildLevelFunc(CustomDataInput *input) {
    this->guildLevel = input->readUnsignedByte();
    if (this->guildLevel < 0 || this->guildLevel > 255) {

    }
}

void GameRolePlayTaxCollectorInformations::_taxCollectorAttackFunc(CustomDataInput *input) {
    this->taxCollectorAttack = input->readInt();
}
