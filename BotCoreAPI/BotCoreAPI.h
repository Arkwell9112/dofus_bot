#ifndef DOFUS2TREASUREHUNT_BOTCOREAPI_H
#define DOFUS2TREASUREHUNT_BOTCOREAPI_H

#include "string"

class BooleanByteWrapper {
public:
    static bool getFlag(unsigned int box, unsigned int index);
};

class CustomDataInput {
private:
    unsigned int position = 0;
    char *buffer = nullptr;

    static long long returnFunc(unsigned int high, unsigned int low);

public:
    static void CopyAndInvertData(char *in, char *out, int len);

    bool readBoolean();

    int readByte();

    double readDouble();

    double readFloat();

    int readInt();

    int readShort();

    unsigned int readUnsignedByte();

    unsigned int readUnsignedInt();

    unsigned int readUnsignedShort();

    std::string readUTFBytes(unsigned int len);

    std::string readUTF();

    int readVarInt();

    unsigned int readVarUhInt();

    int readVarShort();

    unsigned int readVarUhShort();

    long long readInt64();

    double readVarLong();

    double readVarUhLong();

    CustomDataInput(char *content);

    unsigned int getPosition();

    unsigned int readPacketSizeSize(unsigned int len);

    void setPosition(unsigned int position0);
};

class DeserializeInterface {
public:
    virtual void deserialize(CustomDataInput *input);
};

class ProtocolTypeManager {
private:
    static DeserializeInterface *lastInstance;
public:
    static DeserializeInterface *getInstance(unsigned int id, CustomDataInput *input);

    static void deleteLastInstance();
};

class CustomDataOutput {
public:
    CustomDataOutput(char *buffer);

    void writeUnsignedShort(unsigned short value);

    void writePacketSizeSize(unsigned int packetSize, unsigned int packetSizeSize);

    void writeBytes(char *inputBuffer, int len);

    void writeUnsignedInt(unsigned int value);

    unsigned int getPosition();

    void writeDouble(double value);

    void writeBoolean(bool value);

    void writeUnsignedByte(unsigned char value);

private:
    unsigned int position = 0;
    char *buffer = nullptr;
};

#endif //DOFUS2TREASUREHUNT_BOTCOREAPI_H
