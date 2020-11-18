#ifndef SERVERSETTINGSMESSAGE_H
#define SERVERSETTINGSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ServerSettingsMessage : public DeserializeInterface {
public:
    std::string lang;
    unsigned int community = 0;
    int gameType = -1;
    bool isMonoAccount = false;
    unsigned int arenaLeaveBanTime = 0;
    unsigned int itemMaxLevel = 0;
    bool hasFreeAutopilot = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _langFunc(CustomDataInput *input);

    void _communityFunc(CustomDataInput *input);

    void _gameTypeFunc(CustomDataInput *input);

    void _arenaLeaveBanTimeFunc(CustomDataInput *input);

    void _itemMaxLevelFunc(CustomDataInput *input);
};

#endif