
#include <iostream>
using namespace std;

enum Status {
    OK,
    WARNING,
    ERROR
};

struct Reading {
    int id;
    float temperature;
    float humidity;
    Status status;
};

int main() {
    Reading data[5];

    // Enter 5 readings
    for (int i = 0; i < 5; i++) {
        data[i].id = i + 1;

        cout << "Enter temperature: ";
        cin >> data[i].temperature;

        cout << "Enter humidity: ";
        cin >> data[i].humidity;

        // Set status
        if (data[i].temperature > 40)
            data[i].status = ERROR;
        else if (data[i].temperature > 30)
            data[i].status = WARNING;
        else
            data[i].status = OK;
    }

    // Print report
    cout << "\nSensor Report\n";

    for (int i = 0; i < 5; i++) {
        cout << "ID: " << data[i].id << endl;
        cout << "Temperature: " << data[i].temperature << endl;
        cout << "Humidity: " << data[i].humidity << endl;

        cout << "Status: ";

        if (data[i].status == ERROR)
            cout << "ERROR";
        else if (data[i].status == WARNING)
            cout << "WARNING";
        else
            cout << "OK";

        cout << "\n\n";
    }

    return 0;
}
