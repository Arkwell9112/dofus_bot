#ifndef SOCIALNOTICEMESSAGE_H
#define SOCIALNOTICEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SocialNoticeMessage : public DeserializeInterface {
public:
    std::string content;
    unsigned int timestamp = 0;
    double memberId = 0;
    std::string memberName;

    void deserialize(CustomDataInput *input);

private:
    void _contentFunc(CustomDataInput *input);

    void _timestampFunc(CustomDataInput *input);

    void _memberIdFunc(CustomDataInput *input);

    void _memberNameFunc(CustomDataInput *input);
};

#endif