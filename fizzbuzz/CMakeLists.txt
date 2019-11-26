set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

add_library(fizzbuzz SHARED
        ${PROJECT_SOURCE_DIR}/FizzBuzz.h
        ${PROJECT_SOURCE_DIR}/FizzBuzz.cpp
        )

include_directories(${PROJECT_SOURCE_DIR})

target_include_directories(fizzbuzz PUBLIC ${PROJECT_SOURCE_DIR})
