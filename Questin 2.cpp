                                                                                                #include <iostream>
using namespace std;

int main() {
    int age = 20;
    float height = 1.75;
    double salary = 250000.50;
    char grade = 'A';
    bool passed = true;

    cout << "Integer: " << age;
    cout << " | Size: " << sizeof(age) << " bytes" << endl;

    cout << "Float: " << height;
    cout << " | Size: " << sizeof(height) << " bytes" << endl;

    cout << "Double: " << salary;
    cout << " | Size: " << sizeof(salary) << " bytes" << endl;

    cout << "Character: " << grade;
    cout << " | Size: " << sizeof(grade) << " bytes" << endl;

    cout << "Boolean: " << boolalpha << passed;
    cout << " | Size: " << sizeof(passed) << " bytes" << endl;

    return 0;
}