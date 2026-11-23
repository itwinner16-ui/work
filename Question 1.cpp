#include <iostream>
using namespace std;

 int main() {
    string name;
    int age;

    cout << "Name ";
    cin >> name;

    cout << "Years";
    cin >> age;

    cout << "Hello " << name << ", you are "
         << age << " years old." << endl;

    return 0;
}