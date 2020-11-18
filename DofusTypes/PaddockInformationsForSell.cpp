#include "PaddockInformationsForSell.h"
#include "PaddockInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PaddockInformationsForSell::deserialize(CustomDataInput *input) {
    this->_guildOwnerFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_subAreaIdFunc(input);
    this->_nbMountFunc(input);
    this->_nbObjectFunc(input);
    this->_priceFunc(input);
}

void PaddockInformationsForSell::_guildOwnerFunc(CustomDataInput *input) {
    this->guildOwner = input->readUTF();
}

void PaddockInformationsForSell::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void PaddockInformationsForSell::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void PaddockInformationsForSell::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void PaddockInformationsForSell::_nbMountFunc(CustomDataInput *input) {
    this->nbMount = input->readByte();
}

void PaddockInformationsForSell::_nbObjectFunc(CustomDataInput *input) {
    this->nbObject = input->readByte();
}

void PaddockInformationsForSell::_priceFunc(CustomDataInput *input) {
    this->price = input->readVarUhLong();
    if (this->price < 0 || this->price > 9007199254740990) {

    }
}
