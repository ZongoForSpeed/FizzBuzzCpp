project(FizzBuzz)

cmake_minimum_required(VERSION 3.10)
#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/install/")
set(Boost_USE_STATIC_LIBS        ON) # only find static libs
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME    ON)

find_package(Boost 1.58 REQUIRED unit_test_framework date_time)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O3 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
add_compile_options(-std=c++14)

add_compile_options(-Werror -Wall -Wextra -Wpedantic -Weverything
        -Wno-c++98-compat
        -Wno-c++98-compat-pedantic
        -Wno-padded
        -Wno-global-constructors
        -Wno-disabled-macro-expansion
        -Wno-exit-time-destructors
        -Wno-unused-macros)

add_definitions(${Boost_LIB_DIAGNOSTIC_DEFINITIONS})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${Boost_INCLUDE_DIR})

message("Boost_LIBRARIES = " ${Boost_LIBRARIES})
message("Boost_UNIT_TEST_FRAMEWORK_LIBRARY = " ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})
message("Boost_DATE_TIME_LIBRARY = " ${Boost_DATE_TIME_LIBRARY})

add_subdirectory(tests)
add_subdirectory(fizzbuzz)

add_executable(FizzBuzzTest test.cpp)
target_link_libraries(FizzBuzzTest fizzbuzz)
target_link_libraries(FizzBuzzTest tests)
target_link_libraries(FizzBuzzTest ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})
