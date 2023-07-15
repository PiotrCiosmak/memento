#include <iostream>
#include "include/Originator.hpp"
#include "include/Caretaker.hpp"

void clientCode();

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    clientCode();
}

void clientCode()
{
    Originator* originator = new Originator("Super-duper-super-puper-super.");
    Caretaker* caretaker = new Caretaker(originator);
    caretaker->backup();
    originator->doSomething();
    caretaker->backup();
    originator->doSomething();
    caretaker->backup();
    originator->doSomething();
    std::cout << '/n';
    caretaker->showHistory();
    std::cout << "\nClient: Now, let's rollback!\n\n";
    caretaker->undo();
    std::cout << "\nClient: Once more!\n\n";
    caretaker->undo();

    delete originator;
    delete caretaker;
}