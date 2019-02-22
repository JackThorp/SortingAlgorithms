#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <chrono>
#include <cstdlib>
#include <ctime>

#include "BubbleSort.hpp"
#include "InsertionSort.hpp"

using namespace std;

void printVector(const vector<int> &list);

int main(int argc, const char * argv[]) {
    
    // BUBBLE SORT
    // List of numbers
    // Start with first number
    // 1. compare to next number. while greater than swap positions.
    // 2. If swap occured go back to start index. If not increase index
 
/*
    cout << "Please enter a list of space delimited numbers to be sorted:" << endl;
    
    string line;
    
    getline(cin, line);
    stringstream ss(line);
    
    int num;
    vector<int> numbers;

    // Input operator only reads until next whitespace. 
    while(ss >> num) {
      numbers.push_back(num);
    }
  */
 
    int num;
    vector<int> numbers;

    // srand seeds random generator.
    // time() gets current calender time. Assigns to time_t variable if one is passed.  
    srand(time(NULL));

    // randomly generate a list of 100 numbers between 0 and 99
    for(int i = 0; i < 100; i++) {
      numbers.push_back(rand() % 100);
    }
  
    int sort_choice;
    cout << "Here is the list of unsorts..." << endl;
    printVector(numbers);
    /*
    cout << "Which sort would you like to use?" << endl;
    cout << "1. Bubble" << endl;
    cout << "2. Insertion" << endl;
    cout << "3. Merge" << endl;
    cout << "4. Selection" << endl;
    cout >> sort_choice;
    */
    vector<int> sorted;
    chrono::high_resolution_clock::time_point t1;
    chrono::high_resolution_clock::time_point t2;
    BubbleSort bubble;
    //timeSort (numbers, bubble.sort);
    t1 = chrono::high_resolution_clock::now();
    sorted = bubble.sort(numbers);
    t2 = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "BUBBLE: " << duration << endl;

    InsertionSort inSort;
    t1 = chrono::high_resolution_clock::now();
    inSort.sort(numbers);
    t2 = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    cout << "INSERTION: " << duration << endl;


    return 0;
}
/*
void timeSort(vector<int> numbers, vector<int> (*sortfunction) (vector<int>))
{
    vector<int> sorted = (BubbleSort::* sortfunction) (numbers); 
}
*/

void printVector(const vector<int> &list)
{
  typedef vector<int> Nums;

  for(Nums::const_iterator i = list.begin(); i != list.end(); ++i)
  {
    cout << *i << " ";
  }

  cout << endl;
}
