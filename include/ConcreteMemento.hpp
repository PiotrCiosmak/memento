#pragma once

#include "Memento.hpp"
#include <ctime>

class ConcreteMemento : public Memento
{
public:
    explicit ConcreteMemento(std::string new_state);
    [[nodiscard]] std::string getName() const override;
    [[nodiscard]] std::string getDate() const override;
    [[nodiscard]] std::string getState() const override;

private:
    std::string state;
    std::string date;
};
