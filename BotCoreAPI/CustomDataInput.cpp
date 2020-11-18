#include "BotCoreAPI.h"
#include "string"

void CustomDataInput::CopyAndInvertData(char *in, char *out, int len) {
    for (int i = 0; i < len; i++) {
        out[i] = in[len - 1 - i];
    }
}

bool CustomDataInput::readBoolean() {
    this->position += 1;
    if (this->buffer[this->position - 1] != 0) {
        return true;
    } else {
        return false;
    }
}

int CustomDataInput::readByte() {
    char value = 0;
    CustomDataInput::CopyAndInvertData(&this->buffer[this->position], reinterpret_cast<char *>(&value), 1);
    this->position += 1;
    return (int) value;
}

double CustomDataInput::readDouble() {
    double value = 0;
    CustomDataInput::CopyAndInvertData(&this->buffer[this->position], reinterpret_cast<char *>(&value), 8);
    this->position += 8;
    return value;
}

double CustomDataInput::readFloat() {
    float value = 0;
    CustomDataInput::CopyAndInvertData(&this->buffer[this->position], reinterpret_cast<char *>(&value), 4);
    this->position += 4;
    return (double) value;
}

int CustomDataInput::readInt() {
    int value = 0;
    CustomDataInput::CopyAndInvertData(&this->buffer[this->position], reinterpret_cast<char *>(&value), 4);
    this->position += 4;
    return value;
}

int CustomDataInput::readShort() {
    short value = 0;
    CustomDataInput::CopyAndInvertData(&this->buffer[this->position], reinterpret_cast<char *>(&value), 2);
    this->position += 2;
    return (int) value;
}

unsigned int CustomDataInput::readUnsignedByte() {
    unsigned char value = 0;
    CustomDataInput::CopyAndInvertData(&this->buffer[this->position], reinterpret_cast<char *>(&value), 1);
    this->position += 1;
    return (unsigned int) value;
}

unsigned int CustomDataInput::readUnsignedInt() {
    unsigned int value = 0;
    CustomDataInput::CopyAndInvertData(&this->buffer[this->position], reinterpret_cast<char *>(&value), 4);
    this->position += 4;
    return value;
}

unsigned int CustomDataInput::readUnsignedShort() {
    unsigned short value = 0;
    CustomDataInput::CopyAndInvertData(&this->buffer[this->position], reinterpret_cast<char *>(&value), 2);
    this->position += 2;
    return (unsigned int) value;
}

std::string CustomDataInput::readUTFBytes(unsigned int len) {
    char str[len + 1];
    memcpy(str, &this->buffer[this->position], len);
    str[len] = "\0"[0];
    this->position += len;
    return std::string(str);
}

std::string CustomDataInput::readUTF() {
    unsigned int len = this->readUnsignedShort();
    return this->readUTFBytes(len);
}

int CustomDataInput::readVarInt() {
    int offset = 0;
    unsigned int value = 0;
    while (offset < 32) {
        unsigned int b = this->readUnsignedByte();
        bool hasNext = (b & 128) == 128;
        value += (b & 127) << offset;
        offset += 7;
        if (!hasNext) {
            int returnValue = 0;
            memcpy(&returnValue, &value, 4);
            return returnValue;
        }
    }
    return -1;
}

unsigned int CustomDataInput::readVarUhInt() {
    return (unsigned int) this->readVarInt();
}

int CustomDataInput::readVarShort() {
    int offset = 0;
    unsigned int value = 0;
    while (offset < 16) {
        unsigned int b = this->readUnsignedByte();
        bool hasNext = (b & 128) == 128;
        value += (b & 127) << offset;
        offset += 7;
        if (!hasNext) {
            int returnValue = 0;
            memcpy(&returnValue, &value, 4);
            if (returnValue > 32767) {
                returnValue -= 65536;
            }
            return returnValue;
        }
    }
    return -1;
}

unsigned int CustomDataInput::readVarUhShort() {
    return (unsigned int) this->readVarShort();
}

long long CustomDataInput::returnFunc(unsigned int high, unsigned int low) {
    unsigned long long exHigh = high;
    unsigned long long outputValue = 0;
    outputValue = (exHigh << 32) | low;
    long long value = 0;
    memcpy(&value, &outputValue, 8);
    return value;
}

long long CustomDataInput::readInt64() {
    unsigned int b = 0;
    unsigned int high = 0;
    unsigned int low = 0;
    int i = 0;
    while (true) {
        b = this->readUnsignedByte();
        if (i == 28) {
            break;
        }
        if (b >= 128) {
            low |= (b & 127) << i;
            i += 7;
            continue;
        }
        low |= (b & 127) << i;
        return CustomDataInput::returnFunc(high, low);
    }
    if (b >= 128) {
        b &= 127;
        low |= b << i;
        high = b >> 4;
        i = 3;
        while (true) {
            b = this->readUnsignedByte();
            if (i < 32) {
                if (b >= 128) {
                    high |= (b & 127) << i;
                }
            } else {
                break;
            }
            i += 7;
        }
        high |= b << i;
        return CustomDataInput::returnFunc(high, low);
    }
    low |= b << i;
    high = b >> 4;
    return CustomDataInput::returnFunc(high, low);
}

double CustomDataInput::readVarLong() {
    return (double) this->readInt64();
}

double CustomDataInput::readVarUhLong() {
    unsigned long long value = 0;
    long long inputValue = this->readInt64();
    memcpy(&value, &inputValue, 8);
    return (double) value;
}

CustomDataInput::CustomDataInput(char *content) {
    this->buffer = content;
}

unsigned int CustomDataInput::getPosition() {
    return position;
}

unsigned int CustomDataInput::readPacketSizeSize(unsigned int len) {
    unsigned int value = 0;
    for (int i = 0; i < len; i++) {
        value += readUnsignedByte() << ((len - i - 1) * 8);
    }
    return value;
}

void CustomDataInput::setPosition(unsigned int position0) {
    this->position = position0;
}