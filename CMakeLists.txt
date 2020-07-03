cmake_minimum_required(VERSION 3.18.0)
project(tutorial-cpp-conan-cmake)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(animals)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)

set(INCLUDES)

conan_basic_setup()
add_executable(tutorial-cpp-conan-cmake main.cpp)
target_link_libraries(tutorial-cpp-conan-cmake ${CONAN_LIBS} Animals)
