#include <gtest/gtest.h>

#include <animals/Animal.hpp>

namespace animals {
namespace test {

namespace {
  const std::string kValidAnimalName = "Test Animal";
  const std::string kEmptyAnimalName = "";
  const int kPositiveNumberOfLimbs = 4;
  const int kZeroNumberOfLimbs = 0;
  const int kNegativeNumberOfLimbs = -3;
}

TEST(AnimalTest, CreatingAnimalSuccessful) {
  ASSERT_NO_THROW({
    Animal(kValidAnimalName, kPositiveNumberOfLimbs);
    });
}

TEST(AnimalTest, AnimalThrowsExceptionWhenEmptyName) {
  ASSERT_THROW({
    Animal(kEmptyAnimalName, kPositiveNumberOfLimbs);
  }, std::invalid_argument);
}

TEST(AnimalTest, AnimalThrowsExceptionWhenNumberOfLimbsNegative) {
  ASSERT_THROW({
    Animal(kValidAnimalName, kNegativeNumberOfLimbs);
  }, std::invalid_argument);
}

TEST(AnimalTest, AnimalThrowNoErrorWhenNumberOfLimbsIsZero) {
  ASSERT_NO_THROW({
    Animal(kValidAnimalName, kZeroNumberOfLimbs);
  });
}

}
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}