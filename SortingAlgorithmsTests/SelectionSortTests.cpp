//
//  SelectionSortTests.cpp
//  SortingAlgorithmsTests
//
//  Created by Jack Thorp on 21/12/2017.
//  Copyright © 2017 Jack Thorp. All rights reserved.
//
#include "catch.hpp"
#include "SelectionSort.hpp"
#include <stdio.h>

using namespace std;

TEST_CASE("Selection sort")
{
    SelectionSort ss;
    
    SECTION("Sorts empty list")
    {
        vector<int> list = {};
        vector<int> sorted = {};
        ss.sort(list);
        REQUIRE(list == sorted);
    }
    
    SECTION("Sorts three positive numbers")
    {
        vector<int> list = {3,1,2};
        vector<int> sorted = {1,2,3};
        ss.sort(list);
        REQUIRE(list == sorted);
    }
}

