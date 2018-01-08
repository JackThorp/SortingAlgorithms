//
//  SelectionSort.cpp
//  SortingAlgorithms
//
//  Created by Jack Thorp on 21/12/2017.
//  Copyright © 2017 Jack Thorp. All rights reserved.
//

#include "SelectionSort.hpp"
#include <algorithm>

using namespace std;

// SELECTION SORT ALGORITHM
// 1. Iterate through list to find smallest element
// 2. Swap smallest element with element at front of list.
// 3. Repeat 1. and 2. with tail of list until tail is empty.

// Template to switch or exchange two items
template <class Item> void exch(Item& A, Item& B)
{
    Item t = A; A = B; B = t;
}

// Template to exchange based on comparison
template <class Item> void compexch(Item& A, Item& B)
{
    if (B < A)
    {
        exch(A, B);
    }
}

void SelectionSort::sort(vector<int>& list)
{
    if (list.size() == 0)
        return;
    
    typedef vector<int>::iterator It;
    
    size_t count = 0;
    size_t size = list.size();

    // Pre: size is >= 1
    while (count < size)
    {
        // Intialise min value to head of current sublist.
        It mIt = list.begin() + count;
        
        for (It it = list.begin() + count + 1; it != list.end(); ++it)
        {
            if (*it < *mIt)
            {
                mIt = it;
            }
        }
        int min = *mIt;
        *mIt = *(list.begin() + count); // move head val to min position
        *(list.begin() + count) = min;  // move min val to head position
        ++count;
    }

    return;
}

// If call is made here to sort function (above) what is the performance difference
// compared to caller going to above sort directly?
vector<int> SelectionSort::copySort(vector<int> list)
{
    return list;
}
