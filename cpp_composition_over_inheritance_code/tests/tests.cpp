// tests.cpp
#include "cpp_composition_over_inheritance_code/whattotest.h"
#include <cpp_composition_over_inheritance_code/hello.h>
#include <gtest/gtest.h>
 
TEST(SquareRootTest, PositiveNos) { 
    ASSERT_EQ(6, squareRoot(36.0));
    ASSERT_EQ(18.0, squareRoot(324.0));
    ASSERT_EQ(25.4, squareRoot(645.16));
    ASSERT_EQ(0, squareRoot(0.0));
}
 
TEST(SquareRootTest, NegativeNos) {
    ASSERT_EQ(-1.0, squareRoot(-15.0));
    ASSERT_EQ(-1.0, squareRoot(-0.2));
}

TEST(HelloTest, VaryingNames) {
    ASSERT_EQ("Hello, Philipp!", sayHello("Philipp"));
    ASSERT_EQ("Hello, Noah!", sayHello("Noah"));
    ASSERT_EQ("Hello, Bärbel!", sayHello("Bärbel"));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
