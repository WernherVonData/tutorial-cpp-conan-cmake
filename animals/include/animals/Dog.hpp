#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

#include <string>
 
namespace animals {

class Dog : public Animal {
public:

  Dog(const std::string& name, const int number_of_limbs);
  ~Dog() = default;
  const std::string GetName() const override;
  const std::string GetSound() const override;
  const int GetLimbs() const override;

  private:
  const std::string sound;
};

}
#endif