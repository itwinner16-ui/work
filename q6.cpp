
#include <iostream>
using namespace std;

// Find maximum number
int maxOf(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

// Convert Celsius to Fahrenheit
float celsiusToFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

// Check prime number
bool isPrime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {

    cout << "Maximum = "
         << maxOf(10, 20) << endl;

    cout << "Fahrenheit = "
         << celsiusToFahrenheit(25) << endl;

    cout << "Prime numbers below 100:\n";

    for (int i = 1; i < 100; i++) {
        if (isPrime(i))
            cout << i << " ";
    }

    return 0;
}
