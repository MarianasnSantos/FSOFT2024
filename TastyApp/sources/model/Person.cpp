#include "Person.h"

Person::Person(const std::string &name) : name(name) {}

// Getters and Setters
std::string Person::getName() const {
    return name;
}

void Person::setName(const std::string &name) {
    this->name = name;
}