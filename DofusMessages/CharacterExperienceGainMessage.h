#ifndef CHARACTEREXPERIENCEGAINMESSAGE_H
#define CHARACTEREXPERIENCEGAINMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterExperienceGainMessage : public DeserializeInterface {
public:
    double experienceCharacter = 0;
    double experienceMount = 0;
    double experienceGuild = 0;
    double experienceIncarnation = 0;

    void deserialize(CustomDataInput *input);

private:
    void _experienceCharacterFunc(CustomDataInput *input);

    void _experienceMountFunc(CustomDataInput *input);

    void _experienceGuildFunc(CustomDataInput *input);

    void _experienceIncarnationFunc(CustomDataInput *input);
};

#endif