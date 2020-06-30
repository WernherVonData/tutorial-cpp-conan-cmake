#include <iostream>
#include <string>

#include "boost/optional.hpp"

boost::optional<std::string> GetString() {
  return boost::none;
}

int main(int argc, char *argv[])
{
  std::cout << "Hello conan" << std::endl;
  auto str = GetString();
  if (str) {
    std::cout << str.get() << std::endl;
  }
  else {
    std::cout << "String is null" << std::endl;
  }
  return 0;
}
