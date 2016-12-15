#include <Calculator.hpp>
#include <catch.hpp>

SCENARIO("Calculator sum", "[sum]") {
    float a = 5;
    float b = 4;
    
    double rv = sum( a, b );
    
	REQUIRE( rv == 9);
}

SCENARIO("Calculator sub", "[sub]") {
    float a = 6;
    float b = 4;
    
    double rv = sub( a, b );
    
	REQUIRE( rv == 2);
}

SCENARIO("Calculator multiply", "[multiply]") {
    float a = 3;
    float b = 4;
    double *n = new double;
    double rv = multiply( a, b );
    
	REQUIRE( rv == 12);
}

SCENARIO("Calculator div", "[div]") {
    float a = 8;
    float b = 4;
    
    double rv = div( a, b );
    
	REQUIRE( rv == 2);
}

SCENARIO("Calculator pow", "[pow1]") {
    float a = 2;
    int b = 5;
    
    double rv = pow1( a, b );
    
	REQUIRE( rv == 32);
}

SCENARIO("calculator sqrt1", "[sqrt1]") {
    double a = 0.0;
    
    double rv = sqrt1(a);
    
	REQUIRE( rv == 0.0);
}

SCENARIO("Calculator pow.1", "[pow1]") {
    float a = 2;
    int b = -1;
    
    double rv = pow1( a, b );
    
	REQUIRE( rv == 0.5);
}

SCENARIO("calculator sqrt1.1", "[sqrt1]") {
    double a = -3;
    double rv = sqrt1(a);
    
	REQUIRE( rv == "IMPOSSIBLE" );
}

SCENARIO("Calculator div.1", "[div]") {
    float a = 8;
    float b = 0;
    double rv = div( a, b );
    
	REQUIRE( rv == "IMPOSSIBLE" );
}
