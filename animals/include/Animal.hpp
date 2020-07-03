#ifndef ANIMAL_HPP
#define ANIMAL_HPP

namespace animals {

class Animal {
  public:
  /**
   * throws std::invalid_argument, when name is empty or numberOfLimbs is negative
   */
  virtual Animal(const std::string& name, const int numberOfLimbs) = 0;
  virtual ~Animal() = 0;
  virtual const std::string GetName() const = 0;
  virtual const std::string GetSound() const = 0;
  virtual const std::int GetLimbs() const = 0;
};
}
#endif