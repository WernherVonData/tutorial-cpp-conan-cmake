add_library(Animals
  include/Animal.hpp
  include/Dog.hpp
  src/Dog.cpp)

target_include_directories (Animals PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})