project(animals_unittests)

add_executable(${PROJECT_NAME}
  testAnimals.cpp)

find_package(GTest REQUIRED)

enable_testing()

target_link_libraries(${PROJECT_NAME}
  PRIVATE 
    Animals  
    GTest::GTest
)

target_include_directories(${PROJECT_NAME} PRIVATE ../src)

add_test(
  name animals_unittests
  COMMAND ${CMAKE_BINARY_DIR}/bin
  WORKING_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
)