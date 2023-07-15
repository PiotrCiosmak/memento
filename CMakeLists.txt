cmake_minimum_required(VERSION 3.25)
project(memento)

set(CMAKE_CXX_STANDARD 23)

add_executable(memento main.cpp include/Memento.hpp src/ConcreteMemento.cpp include/ConcreteMemento.hpp src/Originator.cpp include/Originator.hpp src/Caretaker.cpp include/Caretaker.hpp)
