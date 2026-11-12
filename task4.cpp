
#include <iostream>
using namespace std;

int main() {

    // Dynamically create an array of 5 integers
    int *arr = new int[5];

    // Assign values to array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // Display array elements
    cout << "Dynamic Array Elements:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    // Release allocated memory
    delete[] arr;
    arr = NULL;

    return 0;
}

