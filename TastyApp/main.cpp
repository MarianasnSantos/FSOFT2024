#include <iostream>
#include "App.h"
#include "Controller.h"

using namespace std;

int main() {
    App app("TastyApp");

    Controller controller(app)

    controller.run();

    cout << "Application has exited" << endl;

    return 0;
}