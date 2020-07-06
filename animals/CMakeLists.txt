project(Animals)

add_library(${PROJECT_NAME}
  STATIC
  include/Animal.hpp
  include/Dog.hpp
  src/Animal.cpp
  src/Dog.cpp)

target_include_directories(${PROJECT_NAME}
PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/include
  ${CMAKE_CURRENT_SOURCE_DIR}
)