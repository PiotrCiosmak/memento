#pragma once

#include <string>

class Memento
{
public:
    [[nodiscard]] virtual std::string getName() const = 0;
    [[nodiscard]] virtual std::string getDate() const = 0;
    [[nodiscard]] virtual std::string getState() const = 0;
    virtual ~Memento() = default;
};
