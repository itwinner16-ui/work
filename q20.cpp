
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Template RingBuffer class
template <typename T, int N>
class RingBuffer {

private:
    T data[N];
    int count;
    int next;

public:

    // Constructor
    RingBuffer() {
        count = 0;
        next = 0;
    }

    // Add new value
    void push(T value) {

        data[next] = value;

        next = (next + 1) % N;

        if (count < N) {
            count++;
        }
    }

    // Return number of stored values
    int size() {
        return count;
    }

    // Calculate average
    double average() {

        if (count == 0) {
            return 0;
        }

        double sum = 0;

        for (int i = 0; i < count; i++) {
            sum += data[i];
        }

        return sum / count;
    }

    // Print stored values
    void print() {

        cout << "Stored readings: ";

        int start = (count == N) ? next : 0;

        for (int i = 0; i < count; i++) {

            int index = (start + i) % N;

            cout << data[index] << " ";
        }

        cout << endl;
    }
};

int main() {

    // Initialize random generator
    srand(time(0));

    // Store last 10 temperature readings
    RingBuffer<double, 10> sensor;

    cout << "IoT Temperature Data Logger" << endl;
    cout << "---------------------------" << endl;

    // Generate 10 sensor readings
    for (int i = 0; i < 10; i++) {

        // Generate random value between 20 and 35
        double temperature = 20 + rand() % 16;

        // Store reading
        sensor.push(temperature);

        cout << "Reading " << i + 1
             << ": " << temperature << " C" << endl;

        cout << "Current average: "
             << sensor.average() << " C" << endl;

        // Check temperature warning
        if (sensor.average() > 30) {
            cout << "WARNING: Temperature average "
                 << "is above 30 C!" << endl;
        }

        cout << endl;
    }

    // Display final results
    cout << "\nFINAL RESULTS" << endl;

    sensor.print();

    cout << "Total stored readings: "
         << sensor.size() << endl;

    cout << "Final average temperature: "
         << sensor.average() << " C" << endl;

    if (sensor.average() > 30) {
        cout << "WARNING: High temperature!" << endl;
    } else {
        cout << "Temperature is NORMAL." << endl;
    }

    return 0;
}
