#include "BotCoreException.h"
#include "string"

BotCoreException::BotCoreException(unsigned int errorCode) {
    this->errorCode = errorCode;

    switch (errorCode) {
        case 1:
            this->errorMessage = std::string("Allocation Error.\n").data();
            break;
        case 2:
            this->errorMessage = std::string("Message ID not found.\n").data();
            break;
        case 3:
            this->errorMessage = std::string("Null sized input buffer.\n").data();
            break;
        case 4:
            this->errorMessage = std::string("DofusType not found.\n").data();
            break;
        case 5:
            this->errorMessage = std::string("File IO Error.\n").data();
            break;
        case 6:
            this->errorMessage = std::string("No More Node in List.\n").data();
            break;
        case 7:
            this->errorMessage = std::string("No Neighbor Found.\n").data();
            break;
        case 8:
            this->errorMessage = std::string("No Open Border Cells.\n").data();
            break;
    }
}

const char *BotCoreException::getMessage() {
    return this->errorMessage;
}

unsigned int BotCoreException::getCode() {
    return this->errorCode;
}