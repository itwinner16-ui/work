
#include <iostream>
using namespace std;

int main() {
    int arr[8], number;

    // Enter 8 numbers
    for (int i = 0; i < 8; i++) {
        cout << "Enter number: ";
        cin >> arr[i];
    }

    // Bubble sort
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 7 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    cout << "Sorted numbers: ";
    for (int i = 0; i < 8; i++)
        cout << arr[i] << " ";

    // Search number
    cout << "\nEnter number to search: ";
    cin >> number;

    bool found = false;

    for (int i = 0; i < 8; i++) {
        if (arr[i] == number) {
            cout << "Found at position " << i + 1;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Not found";

    return 0;
}
