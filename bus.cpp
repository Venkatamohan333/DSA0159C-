#include<iostream>
using namespace std;

class Bus {
    int capacity;

public:
    Bus(int cap) {
        capacity = cap;
    }

    int getCapacity() {
        return capacity;
    }

    int totalChildren(int numBuses) {
        return numBuses * capacity;
    }
};

int main() {
    int busCapacity = 48;
    int numBuses = 3;

    Bus bus1(busCapacity);

    int totalChildren = bus1.totalChildren(numBuses);

    cout << "Three buses can carry " << totalChildren << " children." << endl;

    return 0;
}
