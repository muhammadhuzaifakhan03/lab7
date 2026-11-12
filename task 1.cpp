
#include <iostream>
using namespace std;

int main() {
    int num = 25;

    int *ptr = &num;

    cout << "Value of variable: " << num << endl;
    cout << "Address of variable: " << &num << endl;
    cout << "Value using pointer: " << *ptr << endl;
    cout << "Address stored in pointer: " << ptr << endl;

    return 0;
}

