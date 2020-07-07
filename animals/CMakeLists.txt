project(Animals)

add_library(${PROJECT_NAME}
  STATIC
  include/Animal.hpp
  include/Dog.hpp
  src/Animal.cpp
  src/Dog.cpp)

add_subdirectory(test)

target_include_directories(${PROJECT_NAME}
PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/include
  ${CMAKE_CURRENT_SOURCE_DIR}
)

link_directories(${CONAN_LIB_DIRS})

find_package(boost)

target_link_libraries(${PROJECT_NAME}
PRIVATE
CONAN_PKG::boost
)