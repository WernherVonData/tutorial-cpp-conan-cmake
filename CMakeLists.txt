cmake_minimum_required(VERSION 3.18.0)
project(tutorial-cpp-conan-cmake)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(animals)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)

conan_basic_setup(TARGETS)
link_directories(${CONAN_LIB_DIRS})
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} 
  PUBLIC 
  CONAN_PKG::boost 
  Animals)