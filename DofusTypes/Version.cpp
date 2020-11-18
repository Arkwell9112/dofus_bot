#include "Version.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void Version::deserialize(CustomDataInput *input) {
    this->_majorFunc(input);
    this->_minorFunc(input);
    this->_codeFunc(input);
    this->_buildFunc(input);
    this->_buildTypeFunc(input);
}

void Version::_majorFunc(CustomDataInput *input) {
    this->major = input->readByte();
    if (this->major < 0) {

    }
}

void Version::_minorFunc(CustomDataInput *input) {
    this->minor = input->readByte();
    if (this->minor < 0) {

    }
}

void Version::_codeFunc(CustomDataInput *input) {
    this->code = input->readByte();
    if (this->code < 0) {

    }
}

void Version::_buildFunc(CustomDataInput *input) {
    this->build = input->readInt();
    if (this->build < 0) {

    }
}

void Version::_buildTypeFunc(CustomDataInput *input) {
    this->buildType = input->readByte();
    if (this->buildType < 0) {

    }
}
