#include "FizzBuzz.h"

static const std::string FIZZ = "Fizz";
static const std::string BUZZ = "Buzz";
static const std::string FIZZBUZZ = FIZZ + BUZZ;
static const int DIVIDER_FIZZ = 3;
static const int DIVIDER_BUZZ = 5;

std::string FizzBuzz::given(const int number) const
{
    if (isModulo(number, DIVIDER_FIZZ) && isModulo(number, DIVIDER_BUZZ)) {
        return FIZZBUZZ;
    }
    if (isModulo(number, DIVIDER_FIZZ)) {
        return FIZZ;
    }
    if (isModulo(number, DIVIDER_BUZZ)) {
        return BUZZ;
    }
    if (isModulo(number, 7)) {
        return "Bang";
    }

    return std::to_string(number);
}

bool FizzBuzz::isModulo(const int number, const int modulo) const {
    return number % modulo == 0;
}

bool FizzBuzz::isModulo3(const int &number) const
{
    return number % 3 == 0;
}

bool FizzBuzz::isModulo5(const int &number) const
{
    return number % 5 == 0;
}

