cmake_minimum_required(VERSION 3.15)
project(myproject)

find_package(GTest REQUIRED)

add_executable(mytest src/main.cpp)
target_link_libraries(mytest GTest::GTest GTest::Main gmock)
