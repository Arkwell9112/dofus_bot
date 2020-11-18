#include "ActorRestrictionsInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ActorRestrictionsInformations::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
}

void ActorRestrictionsInformations::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->cantBeAggressed = BooleanByteWrapper::getFlag(_box0, 0);
    this->cantBeChallenged = BooleanByteWrapper::getFlag(_box0, 1);
    this->cantTrade = BooleanByteWrapper::getFlag(_box0, 2);
    this->cantBeAttackedByMutant = BooleanByteWrapper::getFlag(_box0, 3);
    this->cantRun = BooleanByteWrapper::getFlag(_box0, 4);
    this->forceSlowWalk = BooleanByteWrapper::getFlag(_box0, 5);
    this->cantMinimize = BooleanByteWrapper::getFlag(_box0, 6);
    this->cantMove = BooleanByteWrapper::getFlag(_box0, 7);
    unsigned int _box1 = input->readUnsignedByte();
    this->cantAggress = BooleanByteWrapper::getFlag(_box1, 0);
    this->cantChallenge = BooleanByteWrapper::getFlag(_box1, 1);
    this->cantExchange = BooleanByteWrapper::getFlag(_box1, 2);
    this->cantAttack = BooleanByteWrapper::getFlag(_box1, 3);
    this->cantChat = BooleanByteWrapper::getFlag(_box1, 4);
    this->cantBeMerchant = BooleanByteWrapper::getFlag(_box1, 5);
    this->cantUseObject = BooleanByteWrapper::getFlag(_box1, 6);
    this->cantUseTaxCollector = BooleanByteWrapper::getFlag(_box1, 7);
    unsigned int _box2 = input->readUnsignedByte();
    this->cantUseInteractive = BooleanByteWrapper::getFlag(_box2, 0);
    this->cantSpeakToNPC = BooleanByteWrapper::getFlag(_box2, 1);
    this->cantChangeZone = BooleanByteWrapper::getFlag(_box2, 2);
    this->cantAttackMonster = BooleanByteWrapper::getFlag(_box2, 3);
    this->cantWalk8Directions = BooleanByteWrapper::getFlag(_box2, 4);
}
