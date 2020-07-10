#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

namespace animals {

class Animal {
  public:
  /**
   * throws std::invalid_argument, when name is empty or numberOfLimbs is negative
   */
  Animal(const std::string& name, const int number_of_limbs);
  virtual ~Animal() = default;
  virtual const std::string GetName() const;
  virtual const int GetLimbs() const;
  virtual const std::string GetSound() const;

  private:
  const std::string name;
  const int number_of_limbs;
};
}
#endif