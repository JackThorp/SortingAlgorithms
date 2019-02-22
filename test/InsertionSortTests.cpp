//
//  InsertionSortTests.cpp
//  SortingAlgorithmsTests
//
//  Created by Jack Thorp on 08/01/2018.
//  Copyright © 2018 Jack Thorp. All rights reserved.
//
#include "catch.hpp"
#include "InsertionSort.hpp"
#include <stdio.h>

using namespace std;

TEST_CASE("Insertion sort")
{
    InsertionSort is;
    
    WHEN("by ref sort is called...")
    {
        SECTION("Sorts empty list")
        {
            vector<int> list = {};
            vector<int> sorted = {};
            is.sort(list);
            REQUIRE(list == sorted);
        }
        
        SECTION("Sorts unit list")
        {
            vector<int> list = {8};
            vector<int> sorted = {8};
            is.sort(list);
            REQUIRE(list == sorted);
        }
        
        SECTION("Sorts three natural numbers")
        {
            vector<int> list = {3,1,2};
            vector<int> sorted = {1,2,3};
            is.sort(list);
            REQUIRE(list == sorted);
        }
        
        SECTION("Sorts five integer numbers")
        {
            vector<int> list = {-1,4,453,-4,2};
            vector<int> sorted = {-4,-1,2,4,453};
            is.sort(list);
            REQUIRE(list == sorted);
        }
        
        SECTION("Sorts list with MAXINT and MININT")
        {
            vector<int> list = {INT_MAX, 3, INT_MIN};
            vector<int> sorted = {INT_MIN, 3, INT_MAX};
            is.sort(list);
            REQUIRE(list == sorted);
        }
    }
}
