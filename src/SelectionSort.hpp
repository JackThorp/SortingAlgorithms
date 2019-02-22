//
//  SelectionSort.hpp
//  SortingAlgorithms
//
//  Created by Jack Thorp on 21/12/2017.
//  Copyright © 2017 Jack Thorp. All rights reserved.
//

#ifndef SelectionSort_hpp
#define SelectionSort_hpp

#include <stdio.h>
#include <vector>

class SelectionSort
{
public:
    // Sort in place i.e. reference
    void sort(std::vector<int>&);
    
    // Sort a copy i.e. by value
    std::vector<int> copySort(std::vector<int>); // can't overload based on by-ref / by-val...
    
    
};

#endif /* SelectionSort_hpp */
