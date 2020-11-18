#ifndef DOCUMENTREADINGBEGINMESSAGE_H
#define DOCUMENTREADINGBEGINMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DocumentReadingBeginMessage : public DeserializeInterface {
public:
    unsigned int documentId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _documentIdFunc(CustomDataInput *input);
};

#endif