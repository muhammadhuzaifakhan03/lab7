#include <iostream>
using namespace std;

int main() {

    // Create an integer array
    int arr[5] = {10, 20, 30, 40, 50};

    // Create a pointer to the array
    int *ptr = arr;

    // Display elements using pointer arithmetic
    cout << "Array elements using pointer arithmetic:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << endl;
    }

    return 0;
}

