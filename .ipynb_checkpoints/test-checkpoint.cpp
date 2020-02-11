#include "catch.hpp"
#include "functions_to_implement.cpp"
#define CATCH_CONFIG_MAIN

TEST_CASE( "sign ", "[Sign]" ) {
    REQUIRE( Sign(1) == 1 );
    REQUIRE( Sign(-1) == -1 );
    SECTION( "sign changed" ) {
        REQUIRE( Sign(2) == 1 );
        REQUIRE( Sign(-2) == -1 );
    }
}