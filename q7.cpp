
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int largest, smallest;
    int sum = 0;

    // Read 10 numbers
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    largest = arr[0];
    smallest = arr[0];

    // Find largest, smallest and sum
    for (int i = 0; i < 10; i++) {

        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];

        sum += arr[i];
    }

    // Print results
    cout << "\nLargest = " << largest << endl;
    cout << "Smallest = " << smallest << endl;

    cout << "Average = " << (double)sum / 10 << endl;

    // Print reverse array
    cout << "Reverse order: ";

    for (int i = 9; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
