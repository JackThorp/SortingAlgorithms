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
#include <iostream>

using namespace std;

void printSublists(vector<vector<int>> subLists) {
    // PRINT COUPLES LIST
    for (int x = 0; x < subLists.size(); ++x) {
        std::cout << "[ ";
        for (auto i = subLists[x].begin(); i != subLists[x].end(); ++i) {
            std::cout << *i << ' ';
        }
        std::cout << "] ";
    }
    
    std::cout << std::endl;
}

// MERGE SORT TESTS
TEST_CASE("Merge Sorter")
{
    MergeSort ms;

    SECTION("Can sort an empty list")
    {
        vector<int> sorted = {};
        vector<int> list = {};
        ms.recursiveSort(list);
        REQUIRE(list == sorted);
    }
    
    SECTION("Can sort one numbers")
    {
        vector<int> sorted = {114};
        vector<int> list = {114};
        ms.recursiveSort(list);
        REQUIRE(list == sorted);
    }
    
    SECTION("Can sort two numbers")
    {
        vector<int> sorted = {2,5};
        vector<int> list = {5,2};
        ms.recursiveSort(list);
        REQUIRE(list == sorted);
    }
    
    SECTION("Can sort three numbers")
    {
        vector<int> sorted = {2,3,5};
        vector<int> list = {5,2,3};
        ms.recursiveSort(list);
        REQUIRE(list == sorted);
    }
    
    SECTION("Can sort four of same number")
    {
        vector<int> sorted = {2,2,2,2};
        vector<int> list = {2,2,2,2};
        ms.recursiveSort(list);
        REQUIRE(list == sorted);
    }
    
    SECTION("Can sort negative numbers")
    {
        vector<int> sorted = {-8,-2,-1,4};
        vector<int> list = {-1,-2,4,-8};
        ms.recursiveSort(list);
        REQUIRE(list == sorted);
    }
    
}
/*
TEST_CASE("Couple List")
{
    MergeSort ms;
    
    SECTION("List is split into vector couples when length is even.")
    {
        vector<int> list = {1,2,3,4,5,6};
        vector<vector<int>> couples = ms.subList(list, 2);
        
        vector<int> c1 = {1,2};
        vector<int> c2 = {3,4};
        vector<int> c3 = {5,6};
        
        REQUIRE(couples.size() == 3);
        REQUIRE(couples[0] == c1);
        REQUIRE(couples[1] == c2);
        REQUIRE(couples[2] == c3);
        

    }
    
    SECTION("List is split into vector couples when length is odd.")
    {
        vector<int> list = {1,2,3,4,5};
        vector<vector<int>> subLists = ms.subList(list, 2);
        
        vector<int> c1 = {1,2};
        vector<int> c2 = {3,4};
        vector<int> c3 = {5};
        
        // PRINT COUPLES LIST
        // printSublists(subLists);
        
        REQUIRE(subLists.size() == 3);
        REQUIRE(subLists[0] == c1);
        REQUIRE(subLists[1] == c2);
        REQUIRE(subLists[2] == c3);
    }
    
    SECTION("List is split into vector triples when length is mulptiple.")
    {
        vector<int> list = {1,2,3,4,5,6};
        vector<vector<int>> subLists = ms.subList(list, 3);
        
        vector<int> c1 = {1,2,3};
        vector<int> c2 = {4,5,6};
        
        // PRINT COUPLES LIST
        //printSublists(subLists);
        
        REQUIRE(subLists.size() == 2);
        REQUIRE(subLists[0] == c1);
        REQUIRE(subLists[1] == c2);
    }
    
    SECTION("List is split into vector triples when length is non multiple.")
    {
        vector<int> list = {1,2,3,4,5,6,7,8};
        vector<vector<int>> subLists = ms.subList(list, 3);
        
        vector<int> c1 = {1,2,3};
        vector<int> c2 = {4,5,6};
        vector<int> c3 = {7,8};
        
        // PRINT COUPLES LIST
        //printSublists(subLists);
        
        REQUIRE(subLists.size() == 3);
        REQUIRE(subLists[0] == c1);
        REQUIRE(subLists[1] == c2);
        REQUIRE(subLists[2] == c3);

    }
}
*/
