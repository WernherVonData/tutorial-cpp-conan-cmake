project(animals_unittests)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

add_executable(${PROJECT_NAME}
  testAnimals.cpp)

target_link_libraries(${PROJECT_NAME}
  PUBLIC 
    CONAN_PKG::gtest
    Animals
)