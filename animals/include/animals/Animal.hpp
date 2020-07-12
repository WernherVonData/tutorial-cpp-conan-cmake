#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <ostream>
#include <string>

namespace animals {

class Animal {
  public:
  /**
   * throws std::invalid_argument, when name is empty or numberOfLimbs is negative
   */
  Animal(const std::string& name, const int number_of_limbs);
  virtual ~Animal() = default;
  virtual std::string GetName() const;
  virtual int GetLimbs() const;


  private:
  const std::string name;
  const int number_of_limbs;
};

std::ostream& operator<<(std::ostream& out, const Animal& animal);
}
#endif