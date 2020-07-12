project(Animals)

set(HEADERS
  include/animals/Animal.hpp
)

set(SOURCES
  src/Animal.cpp
)

add_library(${PROJECT_NAME}
  STATIC
  ${HEADERS}
  ${SOURCES}
)

target_include_directories(${PROJECT_NAME}
PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/include
  ${CMAKE_CURRENT_SOURCE_DIR}
)

add_subdirectory(test)