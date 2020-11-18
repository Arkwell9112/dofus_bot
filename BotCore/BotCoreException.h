#ifndef DOFUS2BOTPREALPHA_0_2_BOTCOREEXCEPTION_H
#define DOFUS2BOTPREALPHA_0_2_BOTCOREEXCEPTION_H

#include "exception"

class BotCoreException : public std::exception {
public:
    explicit BotCoreException(unsigned int errorCode);

    const char *getMessage();

    unsigned int getCode();

private:
    const char *errorMessage = nullptr;
    unsigned int errorCode = 0;
};


#endif //DOFUS2BOTPREALPHA_0_2_BOTCOREEXCEPTION_H