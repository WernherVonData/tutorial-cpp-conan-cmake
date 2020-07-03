#include "Dog.hpp"

#include <stdexcept>

namespace animals {

  Dog::Dog(const std::string& name, const int number_of_limbs)
  : name(name),
    number_of_limbs(number_of_limbs),
    sound("Bark bark")
  {
    if(name.empty()) {
      throw std::invalid_argument("Animal name should not be empty.");
    }

    if (number_of_limbs < 0) {
      throw std::invalid_argument("Animal should have non zero number of limbs.");
    }
  }
  const std::string Dog::GetName() const {return name;}
  const std::string Dog::GetSound() const { return sound; }
  const int Dog::GetLimbs() const {return number_of_limbs; }
}