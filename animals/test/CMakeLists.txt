add_executable(animals-unittest
        testAnimals.cpp
        )

find_package(GTest REQUIRED)

target_link_libraries(animals-unittest
  PUBLIC
  CONAN_PKG::gtest
  Animals
)

add_test(NAME animals-unittest
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  COMMAND animals-unittest
)