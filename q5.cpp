
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    // A. Multiplication table
    cout << "\nMultiplication Table\n";

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i
             << " = " << n * i << endl;
    }

    // B. Sum from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "\nSum = " << sum << endl;

    // C. Star pattern
    cout << "\nStar Pattern\n";

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
