#include <gtest/gtest.h>

#include <Animal.hpp>
#include <Dog.hpp>

namespace animals {
namespace test {

TEST(AnimalTest, CreatingAnimalSuccessful) {
  ASSERT_NO_THROW({
    Animal("Test Animal", 5);
    });
}

}
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}