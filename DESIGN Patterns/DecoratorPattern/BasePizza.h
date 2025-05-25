#pragma once
class BasePizza {
public:
    virtual int cost() const = 0;
    virtual ~BasePizza() = default;
};
