# tutorial-cpp-conan-cmake

### Table of Contents

1. [Project Motivation](#motivation)
2. [Installation](#installation)
2. [Licensing, Authors, and Acknowledgements](#licensing)

## Project Motivation <a name="motivation"></a>

In my daily work, I'm using C++, CMake, Conan, and gtest around 80% of the time. But I've NEVER had an opportunity to set up such a project from scratch. I was always in situation when the project was in 'just to build' state or someone else was doing that. It's a shame, so I'm going to do it here.

## Installation <a name="installation"></a>

In project I was using VS Code with the following plugins:
* C/C++
* C++ Test Mate
* CMake
* CMake Tools

For Linux compilation, I was using Clang 10.0.

For conan building all dependencies from sources I've created a new profile with environment variables CC and CXX set - one of the boost dependencies is written in pure C and GTest uses CXX variable to be built - Windows don't require it

How to install for the newbie (Linux):

Install CMake in your system. You can install plugins as well.

Install Conan to your system - python required - you can install it purely or under python venv (remember then to switch to it in VS Code Terminal) - specific instructions can be found <a href=" https://docs.conan.io/en/latest/installation.html">here</a>.

When the project is open create 'build' directory and from that directory type:

* ```conan install ..```

This will download and install all required dependencies and you will be able to go with cmake and build. I'm recommending to create a conan profile so you can keep all configuration information in one <a href="https://docs.conan.io/en/latest/reference/profiles.html">place</a>.

Next from build directory to generate cmake build info type:

* ```cmake ..```

And then

* ```cmake --build .```

After that you can call:

* ```ctest```

To run all tests.

You can also do these steps directly from VS Code if you have plugins installed.

## Licensing, Authors, and Acknowledgements <a name="licensing"></a>
I'm releasing this code under Creative Commons 1.0, se LICENSE file.

I would appreciate if you would share some feedback with me about this project if you find it useful, or just have some comment about it. 
