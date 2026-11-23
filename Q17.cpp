
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "How many numbers do you want to store? ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number!" << endl;
        return 1;
    }

    // Vector manages memory automatically
    vector<int> numbers(n);

    // Fill the vector
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Calculate average
    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    double average = sum / numbers.size();

    // Print numbers
    cout << "\nNumbers: ";

    for (int number : numbers) {
        cout << number << " ";
    }

    cout << "\nAverage = " << average << endl;

    return 0;
}
