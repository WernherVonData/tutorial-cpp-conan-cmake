#include <iostream>
#include <string>

#include "boost/optional.hpp"

#include "animals/include/Dog.hpp"

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

  animals::Animal dog("Butch", 4);
  std::cout << "Name " << dog.GetName() << std::endl;
  std::cout << "Sound: " << dog.GetSound() << std::endl;
  std::cout << "Limbs: " << dog.GetLimbs() << std::endl;

  return 0;
}
