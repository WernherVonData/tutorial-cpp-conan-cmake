project(animals_unittests)

add_executable(${PROJECT_NAME}
  testAnimals.cpp)

target_link_libraries(${PROJECT_NAME}
  PRIVATE 
    Animals  
    CONAN_PKG::gtest
)

target_include_directories(${PROJECT_NAME} PRIVATE ../src)

add_test(
  name animals_unuittest
  COMMAND ${CMAKE_BINARY_DIR}/bin
  WORKING_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
)