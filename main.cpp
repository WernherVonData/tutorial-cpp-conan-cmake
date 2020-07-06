#include <iostream>
#include <string>
#include <vector>

#include "boost/optional.hpp"

#include <animals/Animals.hpp>
#include <animals/Dog.hpp>

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

  animals::Animal something("UGA BUGA", 3);
  animals::Dog dog("Butch", 4);
  
  std::cout << dog.GetSound() << std::endl;

  return 0;
}
