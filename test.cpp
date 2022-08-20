#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>
#include <iostream>
#include "list.h"

TEST_CASE( "List tests", "[list]" ) {
    List TestList;
    SECTION("Check Empty function") {
        CHECK( TestList.Empty() == 1 );
        TestList.PushBack(0);
        CHECK( TestList.Empty() == 0 );
    };
    SECTION("Check Size function") {
        CHECK( TestList.Size() == 0 );
        TestList.PushBack(1);
        CHECK( TestList.Size() == 1 );
        TestList.PushBack(2);
        CHECK( TestList.Size() == 2 );
    };
    SECTION("Check Clear function") {
        TestList.PushBack(1);
        TestList.PushBack(2);
        TestList.Clear();
        CHECK( TestList.Empty() == true );
        CHECK( TestList.Size() == 0 );
    };
}

int main() {
    std::cout << "Testing List class" << std::endl;
    return Catch::Session().run();
}