//
//  MergeSort.cpp
//  SortingAlgorithms
//
//  Created by Jack Thorp on 14/12/2017.
//  Copyright © 2017 Jack Thorp. All rights reserved.
//

#include "MergeSort.hpp"

using namespace std;
// Algorithm
// 1. Divide list into couplets
// 2. Sort sublists
// 3. Merge couples of sublists
//    a. compare first element of each and add to new list.
//    b. repeat step a until sublists are empty (fully traversed).
// 4. Repeat 3 until all lists are merged into one


// roof(log2(list.size)) number of iterations
//
void MergeSort::recursiveSort(vector<int>& list)
{
    if (list.size() == 0 || list.size() == 1)
    {
        return;
    }
    
    vector<int> l_list;
    vector<int> r_list;
    
    // recurse if list size is greater than two.
    if (list.size() >= 2)
    {
        // Divide list in half
        size_t mid = list.size() / 2;
        l_list = vector<int> (list.begin(), list.begin()+mid);
        r_list = vector<int> (list.begin() + mid, list.end());
        
        // Recurse and retreive sorted sublists;
        this->recursiveSort(l_list);
        this->recursiveSort(r_list);
        
    }
    
    // Merge sorted sublists and copy to list.
    list.clear();
    vector<int>::iterator it_l = l_list.begin();
    vector<int>::iterator it_r = r_list.begin();
    
    while (!(it_l == l_list.end() && it_r == r_list.end()))
    {
        // left side is smaller or iterator has reached end of right list
        if ( it_l != l_list.end() && (it_r == r_list.end() || *it_l < *it_r))
        {
            list.push_back (*it_l);
            it_l++;
        } else
        {
            list.push_back (*it_r);
            it_r++;
        }
    }
}

vector<vector<int>> MergeSort::subList(vector<int> list, int sub_size) {
    
    typedef std::vector<int>::iterator it;
    vector< vector<int> > mergeLists;
    
    it from = list.begin();
    do {
        if(list.end() - from > sub_size) {
            vector<int> sub_list;
            sub_list.assign(from, from + sub_size);
            mergeLists.push_back(sub_list);
            from += sub_size;
        } else {
            vector<int> sub_list;
            sub_list.assign(from, list.end());
            mergeLists.push_back(sub_list);
            list.clear();
        }
    } while (!list.empty());
    
    /*
    // 1 2 3 4 5 6
    // i = 0, 2, 4
    // size = 6
    // [1,2], [3,4], [5,6]
    // CREATE INITIAL SUBLIST COUPLETS.
    
    // Can do this better using an iterator??
    for (vector<int>::size_type i = 0; i < list.size() - 2; i+=2){
        mergeLists.push_back({list[i], list[i+1]});
    }
    
    if (list.size() % 2 == 0) {
        mergeLists.push_back({list[list.size()-2], list.back()});
    } else {
        mergeLists.push_back({list.back()});
    }
    
    size_t sl_size = 2;
    // calculate number of sub lists.
    size_t list_count = list.size() / sl_size;
    list_count += list.size() % 2 == 0 ? 0 : 1;
    
    size_t i;
    
    it b = list.begin();
    
    for (i=0; i < list.size() - sl_size; i+= sl_size) {
        mergeLists.push_back({b+i}, {b+i})
    }
    
    size_t ept = list.size() / pair_count; // 6 / 2  = 3
    
    */
    return mergeLists;
}
