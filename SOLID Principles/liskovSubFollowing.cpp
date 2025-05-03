#include <iostream>
using namespace std;

// Base interface
class Bike {
public:
    virtual void accelerate() = 0;
    virtual ~Bike() = default;
};

// Extended interface for bikes with engines
class EngineBike : public Bike {
public:
    virtual void turnOnEngine() = 0;
    ~EngineBike() override = default;
};

// MotorCycle class implementing EngineBike
class MotorCycle : public EngineBike {
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
private:
    int speed = 0;

public:
    void accelerate() override {
        speed += 5;
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
    b.accelerate();

    return 0;
}
