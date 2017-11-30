//
//  BubbleSort.cpp
//  SortingAlgorithms
//
//  Created by Jack Thorp on 22/11/2017.
//  Copyright © 2017 Jack Thorp. All rights reserved.
//

#include "BubbleSort.hpp"

using namespace std;

// BUBBL+E SORT ALGORITHM
// Compare successive numbers from start to end.
// Swap if first is greater.
// Repeat one and two until no swaps made
vector<int> BubbleSort::sort(vector<int> list)
{
    bool swap;
    do {
        swap = false;
        for(int i = 0; i < (int)list.size() - 1; ++i)
        {
            int a = list[i];
            int b = list[i+1];
            if (a>b) {
                list[i+1] = a;
                list[i] = b;
                swap = true;
            }
        };
        
    } while (swap);
        
    return list;
}
