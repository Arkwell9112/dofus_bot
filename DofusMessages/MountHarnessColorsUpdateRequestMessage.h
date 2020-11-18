#ifndef MOUNTHARNESSCOLORSUPDATEREQUESTMESSAGE_H
#define MOUNTHARNESSCOLORSUPDATEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountHarnessColorsUpdateRequestMessage : public DeserializeInterface {
public:
    bool useHarnessColors = false;

    void deserialize(CustomDataInput *input);

private:
    void _useHarnessColorsFunc(CustomDataInput *input);
};

#endif