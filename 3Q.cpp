
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "How many numbers do you want to store? ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number!" << endl;
        return 1;
    }

    // Dynamically allocate memory
    int* arr = new int[n];

    // Fill the array
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Calculate average
    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double average = sum / n;

    // Print numbers
    cout << "\nNumbers: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nAverage = " << average << endl;

    // Release allocated memory
    delete[] arr;

    return 0;
}
