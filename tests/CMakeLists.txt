set (PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

add_library (tests SHARED
        ${PROJECT_SOURCE_DIR}/FizzBuzzTest.cpp)

include_directories(${PROJECT_SOURCE_DIR})

target_link_libraries(tests fizzbuzz)
target_include_directories (tests PUBLIC ${PROJECT_SOURCE_DIR})
