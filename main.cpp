#include <iostream>
#include <string>

#include "boost/optional.hpp"

#include <animals/Animal.hpp>

boost::optional<std::string> GetOptionalString() {
  return boost::none;
}

int main(int /*argc*/, char **/*argv[]*/)
{
  auto str = GetOptionalString();
  if (str) {
    std::cout << str.get() << std::endl;
  }
  else {
    std::cout << "String is null" << std::endl;
  }

  animals::Animal zebra("Benny the Zebra", 4);
  
  std::cout << zebra << std::endl;

  return 0;
}
