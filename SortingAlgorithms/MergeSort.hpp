//
//  MergeSort.hpp
//  SortingAlgorithms
//
//  Created by Jack Thorp on 14/12/2017.
//  Copyright © 2017 Jack Thorp. All rights reserved.
//

#ifndef MergeSort_hpp
#define MergeSort_hpp

#include <vector>

class MergeSort
{
public:
    //std::vector<int> sort(std::vector<int> list);
    void recursiveSort(std::vector<int>& list);
    std::vector<std::vector<int>> subList(std::vector<int> list, int sub_size);
};

#endif /* MergeSort_hpp */
