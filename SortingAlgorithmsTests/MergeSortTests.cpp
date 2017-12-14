//
//  MergeSortTests.cpp
//  SortingAlgorithmsTests
//
//  Created by Jack Thorp on 14/12/2017.
//  Copyright © 2017 Jack Thorp. All rights reserved.
//

#include "catch.hpp"
#include "MergeSort.hpp"
#include <vector>

using namespace std;

// MERGE SORT TESTS
TEST_CASE("Merge Sorter")
{
    MergeSort ms;
    
    SECTION("Can sort two numbers")
    {
        vector<int> sorted = {2,5};
        vector<int> result = ms.sort({5,2});
        REQUIRE(result == sorted);
    }
}
