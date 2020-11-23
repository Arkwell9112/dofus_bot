#include "PathHelper.h"

std::string PathHelper::getPath() {
    std::string homeDrive(getenv("HOMEDRIVE"));
    std::string homePath(getenv("HOMEPATH"));
    return homeDrive + homePath + "\\AnkamaInjector";
}
