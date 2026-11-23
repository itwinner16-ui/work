
#include <iostream>
using namespace std;

// Reverse array using pointers only
void reverseArray(int* arr, int size) {
    int* left = arr;
    int* right = arr + size - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

int main() {
    int number = 10;
    int* ptr = &number;

    cout << "Value = " << number << endl;
    cout << "Address = " << &number << endl;
    cout << "Pointer value = " << *ptr << endl;

    int arr[] = {1, 2, 3, 4, 5};

    reverseArray(arr, 5);

    cout << "Reversed array: ";

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}
