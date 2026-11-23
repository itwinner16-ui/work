
#include <iostream>
using namespace std;

// Swap two numbers
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Find minimum and maximum
void minMax(int arr[], int size, int& min, int& max) {
    min = arr[0];
    max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }
}

int main() {
    int a = 10, b = 20;

    swap(a, b);

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    int arr[] = {5, 2, 9, 1, 7};
    int min, max;

    minMax(arr, 5, min, max);

    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;

    return 0;
}

/*
References allow functions to modify original variables.
Passing by value creates copies, so original variables
would not be changed.
*/
