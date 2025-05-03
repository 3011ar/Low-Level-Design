#include <iostream>
#include <stdexcept> // for exceptions
using namespace std;

// Bike interface
class Bike {
public:
    virtual void turnOnEngine() = 0;
    virtual void accelerate() = 0;
    virtual ~Bike() = default;
};

// MotorCycle class implementing Bike
class MotorCycle : public Bike {
private:
    bool isEngineOn = false;
    int speed = 0;

public:
    void turnOnEngine() override {
        isEngineOn = true;
        cout << "Engine turned On" << endl;
    }

    void accelerate() override {
        speed += 10;
        cout << "Speed increased" << endl;
    }
};

// Bicycle class implementing Bike
class Bicycle : public Bike {
public:
    void turnOnEngine() override {
        throw runtime_error("Bicycles don't have an engine!");
    }

    void accelerate() override {
        cout << "Pedaling faster!" << endl;
    }
};

// Main function
int main() {
    MotorCycle m;
    m.turnOnEngine();
    m.accelerate();

    cout << "-----------------" << endl;

    Bicycle b;
    try {
        b.turnOnEngine();
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    b.accelerate();

    return 0;
}
