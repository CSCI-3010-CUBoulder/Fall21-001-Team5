#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("sign test", "[sign]") {
    REQUIRE(Sign(-5.0) == -1.0);
    REQUIRE(Sign(3.0) == 1.0);
    REQUIRE(Sign(3) == 1);
    REQUIRE(Sign(-12) == -1);
}