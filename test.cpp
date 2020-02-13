#include "catch.hpp"
#define CATCH_CONFIG_MAIN

int Sign(int num);

TEST_CASE( "sign ", "[Sign]" ) {
    REQUIRE( Sign(1) == 1 );
    REQUIRE( Sign(-1) == -1 );
    SECTION( "sign changed" ) {
        REQUIRE( Sign(2) == 1 );
        REQUIRE( Sign(-2) == -1 );
    }
    SECTION( "sign changed" ) {
        REQUIRE( Sign(3) == 1 );
        REQUIRE( Sign(-3) == -1 );
    }
}