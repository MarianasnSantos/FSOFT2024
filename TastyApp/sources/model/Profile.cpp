#include "../../headers/model/Profile.h"

using namespace std;

Profile::Profile(const string& name) : name(name) {}

void Profile::setName(const string& name) {
    this->name = name;
}

string Profile::getName() const {
    return name;
}