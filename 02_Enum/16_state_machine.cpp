// Simple state machine with enum class
#include <iostream>
using namespace std;

enum class State { Idle, Running, Paused, Stopped };

State next(State s) {
    switch (s) {
        case State::Idle:    return State::Running;
        case State::Running: return State::Paused;
        case State::Paused:  return State::Stopped;
        default:             return State::Stopped;
    }
}

const char* toStr(State s) {
    switch (s) {
        case State::Idle:    return "Idle";
        case State::Running: return "Running";
        case State::Paused:  return "Paused";
        case State::Stopped: return "Stopped";
    }
    return "?";
}

int main() {
    State s = State::Idle;
    for (int i = 0; i < 4; i++) {
        cout << "Current state: " << toStr(s) << endl;
        s = next(s);
    }
    return 0;
}
