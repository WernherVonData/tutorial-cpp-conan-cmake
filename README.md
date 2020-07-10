# tutorial-cpp-conan-cmake

### Table of Contents

1. [Project Motivation](#motivation)
2. [Licensing, Authors, and Acknowledgements](#licensing)

## Project Motivation <a name="motivation"></a>

In my daily work, I'm using C++, CMake, Conan, and gtest around 80% of the time. But I've NEVER had an opportunity to set up such a project from scratch. I was always in situation when the project was in 'just to build' state or someone else was doing that. It's a shame, so I'm going to do it here.

In project I was using VS Code with the following plugins:
* C/C++
* C++ Test Mate
* CMake
* CMake Tools
For compilation, I was using Clang 10.0.

For conan building all dependencies from sources I've created a new profile with environment variables CC and CXX set - one of boost dependencies is written in pure C and GTest uses CXX variable to be built. 

## Licensing, Authors, and Acknowledgements <a name="licensing"></a>

I would appreciate if you would share some feedback with me about this project if you find it useful, or just find it and get some comment about it. 
