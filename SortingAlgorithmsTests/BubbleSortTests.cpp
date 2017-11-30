//
//  BubbleSortTests.cpp
//  SortingAlgorithmsTests
//
//  Created by Jack Thorp on 22/11/2017.
//  Copyright © 2017 Jack Thorp. All rights reserved.
//

#include "catch.hpp"
#include "BubbleSort.hpp"
#include <vector>

using namespace std;

TEST_CASE("Can set up bubble sorter..")
{
    BubbleSort bs;
    
    SECTION("")
    {
        vector<int> list = {3,1};
        vector<int> sorted = bs.sort(list);
        REQUIRE(sorted[0] == 1);
        REQUIRE(sorted[1] == 3);
    }
    
    SECTION("Already sorted list of 5")
    {
        vector<int> list = {1, 2, 3, 4, 5};
        vector<int> sorted = bs.sort(list);
        REQUIRE(sorted == list);
    }
    
    SECTION("Completely unsorted list of 5")
    {
        vector<int> list = {5, 4, 3, 2, 1};
        vector<int> sorted = {1, 2, 3, 4, 5};
        vector<int> result = bs.sort(list);
        REQUIRE(sorted == result);
    }
    
    SECTION("Random unsorted list of 10")
    {
        vector<int> list = {7, 2, 9, 0, 3, 5, 4, 8, 6, 1};
        vector<int> sorted = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<int> result = bs.sort(list);
        REQUIRE(sorted == result);
    }
    
    SECTION("Empty list")
    {
        vector<int> list = {};
        vector<int> sorted = {};
        vector<int> result = bs.sort(list);
        REQUIRE(sorted == result);
    }
    
    SECTION("List with max int and min int")
    {
        vector<int> list = {INT_MAX, INT_MIN};
        vector<int> sorted = {INT_MIN, INT_MAX};
        vector<int> result = bs.sort(list);
        REQUIRE(sorted == result);
    }
    
    SECTION("List of equal values")
    {
        vector<int> list = {INT_MAX, INT_MAX, INT_MAX};
        vector<int> sorted = {INT_MAX, INT_MAX, INT_MAX};
        vector<int> result = bs.sort(list);
        REQUIRE(sorted == result);
    }
}
