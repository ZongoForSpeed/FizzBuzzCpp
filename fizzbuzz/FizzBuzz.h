#pragma once

#include <string>

class FizzBuzz
{
public:
    std::string given(const int number) const;

private:
    bool isModulo3(const int &number) const;
    bool isModulo5(const int &number) const;
    bool isModulo(const int number, const int modulo) const;
};
