#include "../include/Originator.hpp"

Originator::Originator(std::string new_state) : state{new_state}
{

    std::cout << "Originator: My initial state is: " << state << "\n";
}

void Originator::doSomething()
{
    std::cout << "Originator: I'm doing something important.\n";
    state = generateRandomString(30);
    std::cout << "Originator: and my state has changed to: " << state << "\n";
}

Memento* Originator::save()
{
    return new ConcreteMemento(state);
}

void Originator::restore(Memento* memento)
{
    state = memento->getState();

    std::cout << "Originator: My state has changed to: " << state << "\n";
}

std::string Originator::generateRandomString(int length)
{
    const char alphanum[] =
            "0123456789"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";
    int string_Length = sizeof(alphanum) - 1;

    std::string random_string{};
    for (int i = 0; i < length; ++i)
    {
        random_string += alphanum[std::rand() % string_Length];
    }
    return random_string;
}
