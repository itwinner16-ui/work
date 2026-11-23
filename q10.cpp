
#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    int diagonal = 0;

    // Enter matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter number: ";
            cin >> a[i][j];
        }
    }

    // Print matrix and row sums
    cout << "\nMatrix:\n";

    for (int i = 0; i < 3; i++) {
        int sum = 0;

        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
            sum += a[i][j];
        }

        cout << " Row sum = " << sum << endl;
    }

    // Main diagonal sum
    for (int i = 0; i < 3; i++)
        diagonal += a[i][i];

    cout << "Diagonal sum = " << diagonal << endl;

    // Transpose
    cout << "Transpose:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
