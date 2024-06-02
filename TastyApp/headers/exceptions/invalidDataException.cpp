#include "invalidDataException.h"

using namespace std;

InvalidDataException::InvalidDataException(const string& message) : message(message) {}

const char* InvalidDataException::what() const noexcept {
    return message.c_str();
}