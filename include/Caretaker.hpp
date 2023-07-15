#pragma once

#include <vector>
#include "Originator.hpp"

class Caretaker
{
public:
    explicit Caretaker(Originator* new_originator);

    void backup();
    void undo();
    void showHistory() const;
    ~Caretaker();

private:
    std::vector<Memento*> mementos;
    Originator* originator;
};
