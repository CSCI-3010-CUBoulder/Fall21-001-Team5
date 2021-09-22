#define CATCH_CONFIG_MAIN
#include <vector>
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("connor test", "[connor]") {
	std::vector<int> new_vector1 = {1, 2, 3, 4, 5};	
	std::vector<bool> answer_vector1 = {1, 0, 1, 0, 1};	
	std::vector<int> new_vector2 = {2, 3, 4, 5, 6};	
	std::vector<bool> answer_vector2 = {0, 1, 0, 1, 0};	
	std::vector<int> new_vector3 = {2, 2, 2, 2, 2};	
	std::vector<bool> answer_vector3= {0, 0, 0, 0, 0};	
	REQUIRE(OddMask(new_vector1) == answer_vector1);
	REQUIRE(OddMask(new_vector2) == answer_vector2);
	REQUIRE(OddMask(new_vector3) == answer_vector3);
}
