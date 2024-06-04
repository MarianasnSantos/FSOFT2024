#ifndef FSOFT2024_1DA_5_PERSON_H
#define FSOFT2024_1DA_5_PERSON_H

#include <string>

using namespace std;

class Person {
protected:
    string name;
    bool isNameValid(const string& name);
public:
    Person(const string& name);
    Person(const string& person);
    ~Person();
    const string& getName() const;
    void setName(const string &name);
};


#endif //FSOFT2024_1DA_5_PERSON_H
