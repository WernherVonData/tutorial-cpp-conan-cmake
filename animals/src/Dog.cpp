#include "Dog.hpp"

#include <stdexcept>

namespace animals {

  Dog::Dog(const std::string& name, const int number_of_limbs)
  : Animal(name, number_of_limbs)
  {
  }
  
  const std::string Dog::GetName() const { return Animal::GetName(); }
  const int Dog::GetLimbs() const { return Animal::GetLimbs(); }
  const std::string Dog::GetSound() const { return "Bark Bark"; }
}