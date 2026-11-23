
#include <iostream>
using namespace std;

enum class State {
    RED, GREEN, YELLOW
};

int main() {

    State light = State::RED;

    int time = 0;
    int button;

    cout << "Enter pedestrian button tick (0-29): ";
    cin >> button;

    for (int i = 0; i < 30; i++) {

        // Pedestrian button
        if (i == button && light == State::GREEN) {
            light = State::YELLOW;
            time = 0;
        }

        // Print current state
        if (light == State::RED)
            cout << "Tick " << i + 1 << ": RED" << endl;

        else if (light == State::GREEN)
            cout << "Tick " << i + 1 << ": GREEN" << endl;

        else
            cout << "Tick " << i + 1 << ": YELLOW" << endl;

        time++;

        // Change state after its duration
        if (light == State::RED && time == 5) {
            light = State::GREEN;
            time = 0;
        }

        else if (light == State::GREEN && time == 4) {
            light = State::YELLOW;
            time = 0;
        }

        else if (light == State::YELLOW && time == 2) {
            light = State::RED;
            time = 0;
        }
    }

    return 0;
}
