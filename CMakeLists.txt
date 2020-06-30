cmake_minimum_required(VERSION 3.18.0)
project(tutorial-cpp-conan-cmake)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)

conan_basic_setup()
add_executable(tutorial-cpp-conan-cmake main.cpp)
target_link_libraries(tutorial-cpp-conan-cmake ${CONAN_LIBS})
