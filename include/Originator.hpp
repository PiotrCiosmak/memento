#pragma once

#include <iostream>
#include "Memento.hpp"
#include "ConcreteMemento.hpp"

class Originator
{
public:
    explicit Originator(std::string new_state);
    void doSomething();
    [[nodiscard]] Memento* save();
    void restore(Memento* memento);

private:
    [[nodiscard]] std::string generateRandomString(int length = 10);

    std::string state;
};
