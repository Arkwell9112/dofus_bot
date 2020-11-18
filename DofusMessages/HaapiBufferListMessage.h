#ifndef HAAPIBUFFERLISTMESSAGE_H
#define HAAPIBUFFERLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/BufferInformation.h"

#include <string>
#include <vector>

class HaapiBufferListMessage : public DeserializeInterface {
public:
    std::vector<BufferInformation> buffers;

    void deserialize(CustomDataInput *input);

private:
};

#endif