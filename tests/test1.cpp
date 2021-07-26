#define CATCH_CONFIG_MAIN
#include "catch2.hpp"
#include "../src/small_math.h"

TEST_CASE("Adddition is checked", "[addition]")
{
    using namespace small_math;
    REQUIRE(add(4,6) == 10);
    REQUIRE(add(0, 36) == 36);
    REQUIRE(add(0, 0) == 0);
    REQUIRE(add(-1, 46) == 45);
    REQUIRE(add(-245, -2) == -247);
}
TEST_CASE("Substraction is checked", "[substraction]")
{
    using namespace small_math;
    REQUIRE(sub(4, 6) == -2);
    REQUIRE(sub(56,0) == 56);
    REQUIRE(sub(54, 54) == 0);
    REQUIRE(sub(3, -46) == 49);
    REQUIRE(sub(-245, -2) == -243);
}
TEST_CASE("Multiplication is checked", "[multiplication]")
{
    using namespace small_math;
    REQUIRE(mul(4, 6) == 24);
    REQUIRE(mul(1, 0) == 0);
    REQUIRE(mul(54, 175) == mul(175,54));
    REQUIRE(mul(3, -4) == -12);
    REQUIRE(mul(-75, -2) == 150);
}