#pragma once

class DriverStrategy {
public:
    virtual void drive() = 0;
    virtual ~DriverStrategy() = default;
};
