/*#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test class copy with stacj variable")
{
	Vector v1(3);
	Vector v2 = v1;

	REQUIRE(v1.Size() == v2.Size());
}
TEST_CASE("Test class copy with dynamic(heap) memory variables")
{
	Vector v1(3);
	Vector v2 = v1;

	REQUIRE(v1.Size() == v2.Size());
	v1[1] = 5;

	REQUIRE(v1[1] != v2[1]);
	REQUIRE(v1[1] == 5);
	REQUIRE(v1[1] ==0);
}
TEST_CASE("test class copy dynamic heap w 2 variables")
{
	{
		Vector v1(2);
		Vector v2(3);
		v2 = v1;
		v1[1] = 5;
		REQUIRE(v1[1] == v2[2]);
	}
}
*/

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification")
{
	REQUIRE(true == true);
}

TEST_CASE("Test class copy w stack variables")
{
	Vector<int> v1(5);
	Vector<int> v2 = v1;

	REQUIRE(v1.Size() == v2.Size());
}

TEST_CASE("Test class copy w heap variables")
{
	Vector<int> v1(3);
	Vector<int> v2 = v1;

	REQUIRE(v1.Size() == v2.Size());

	v1[1] = 5;

	REQUIRE(v1[1] != v2[1]);
	REQUIRE(v1[1] == 5);
	REQUIRE(v2[1] == 0);
}

TEST_CASE("Test class copy w 2 instances of Vector")
{
	Vector<double> v1(3);
	Vector<double> v2(3);
	v2 = v1;
	v1[1] = 1;

	REQUIRE(v1[1] != v2[1]);
	REQUIRE(v1[1] == 1);
	REQUIRE(v2[1] == 0);

}

TEST_CASE("Vector capacity with reserve function call")
{
	Vector<int> v(3);
	REQUIRE(v.Capacity() == 3);

	v.Reserve(6);
	REQUIRE(v.Capacity() == 6);

}

TEST_CASE("Vector Resize element's value copied and initiliazed")
{
	Vector<int> v(3);
	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	v.Resize(6);

	REQUIRE(v[0] == 1);
	REQUIRE(v[1] == 2);
	REQUIRE(v[2] == 3);
	REQUIRE(v[3] == 0);
	REQUIRE(v[4] == 0);
	REQUIRE(v[5] == 0);

}

TEST_CASE("Test vector pushback with our default constructor")
{
	Vector<double> v;
	v.Push_Back(5);
	REQUIRE(v.Capacity() == 8);//?
	REQUIRE(v[0] == 5);
	REQUIRE(v.Size() == 1);
}