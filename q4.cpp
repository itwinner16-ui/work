
#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter score: ";
    cin >> score;

    if (score < 0 || score > 100)
        cout << "Invalid";
    else if (score >= 90)
        cout << "Grade A";
    else if (score >= 80)
        cout << "Grade B";
    else if (score >= 70)
        cout << "Grade C";
    else if (score >= 60)
        cout << "Grade D";
    else
        cout << "Grade F";

    return 0;
}
