#include <iostream>
#include "headers\model\App.h"
#include "headers\controllers\Controller.h"

using namespace std;

int main() {
    App app("TastyApp");

    Controller controller(app);
    controller.run();

    cout << "Application has exited" << endl;

    return 0;
}