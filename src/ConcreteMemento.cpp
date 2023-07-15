#include "../include/ConcreteMemento.hpp"

ConcreteMemento::ConcreteMemento(std::string new_state) : state{new_state}
{
    std::time_t now = std::time(0);
    this->date = std::ctime(&now);
}

std::string ConcreteMemento::getName() const
{
    return date + " / (" + state.substr(0, 9) + "...)";
}

std::string ConcreteMemento::getDate() const
{
    return date;
}

std::string ConcreteMemento::getState() const
{
    return state;
}
