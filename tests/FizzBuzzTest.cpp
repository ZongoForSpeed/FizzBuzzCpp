#include "FizzBuzz.h"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(FizzBuzzTest)

    BOOST_AUTO_TEST_CASE(return_Given_number) {
        FizzBuzz fizzBuzz;
        BOOST_CHECK_EQUAL(fizzBuzz.given(1), "1");
        BOOST_CHECK_EQUAL(fizzBuzz.given(2), "2");
        BOOST_CHECK_EQUAL(fizzBuzz.given(4), "4");
    }

    BOOST_AUTO_TEST_CASE(Return_Fizz_Given_Modulo_3) {
        FizzBuzz fizzBuzz;
        BOOST_CHECK_EQUAL(fizzBuzz.given(3), "Fizz");
        BOOST_CHECK_EQUAL(fizzBuzz.given(6), "Fizz");
        BOOST_CHECK_EQUAL(fizzBuzz.given(9), "Fizz");
    }

    BOOST_AUTO_TEST_CASE(Return_Buzz_Given_Modulo_5) {
        FizzBuzz fizzBuzz;
        BOOST_CHECK_EQUAL(fizzBuzz.given(5), "Buzz");
        BOOST_CHECK_EQUAL(fizzBuzz.given(10), "Buzz");
        BOOST_CHECK_EQUAL(fizzBuzz.given(20), "Buzz");
    }

    BOOST_AUTO_TEST_CASE(Return_FizzBuzz_Given_Modulo_3_And_5) {
        FizzBuzz fizzBuzz;
        BOOST_CHECK_EQUAL(fizzBuzz.given(15), "FizzBuzz");
    }

BOOST_AUTO_TEST_SUITE_END()


