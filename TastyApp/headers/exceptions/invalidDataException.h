#ifndef LASTTEST_LOG_INVALIDDATAEXCEPTION_H
#define LASTTEST_LOG_INVALIDDATAEXCEPTION_H


#include <exception>
#include <string>

using namespace std;

class InvalidDataException : public exception {
public:
    InvalidDataException(const string& message);
    const char* what() const noexcept override;

private:
    string message;
};

#endif //LASTTEST_LOG_INVALIDDATAEXCEPTION_H
