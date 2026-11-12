
#include <iostream>
using namespace std;

int main() {

    int *ptr = new int;

    *ptr = 50;

    cout << "Value stored in dynamic memory: "
         << *ptr << endl;

    delete ptr;

    ptr = NULL;

    return 0;
}

