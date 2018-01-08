//
//  InsertionSort.cpp
//  SortingAlgorithms
//
//  Created by Jack Thorp on 08/01/2018.
//  Copyright © 2018 Jack Thorp. All rights reserved.
//

#include "InsertionSort.hpp"

using namespace std;

// Insertion sort.
// 1. Put smallest element at list beginning
// 2. Iterate through list until end is reached holding on to current element
// 3. Whilst current element is smaller than it's left hand neighbour shift neighbour right
// 4. Insert current element where left neighour is no longer smaller
void InsertionSort::sort(vector<int>& list)
{
    // Move smallest element to front.
    // 5, 4, 3, 2, 1, (0)
    for (int i = int(list.size()) - 1; i > 0; --i) {
        if (list[i] < list[i-1])
        {
            int temp = list[i-1];
            list[i-1] = list[i];
            list[i] = temp;
        }
    }
    
    int count = 2;
    for (int i = count; i < list.size(); ++i)
    {
        int v = list[i];
        int j = i;
        while(v < list[j-1])
        {
            list[j] = list[j-1]; j--;
        }
        list[j] = v;
    }
    return;
}
