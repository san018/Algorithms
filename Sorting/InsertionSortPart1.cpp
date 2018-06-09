/*

QUESTION:
Sorting 
One common task for computers is to sort data. For example, people might want to see all their files on a computer sorted by size. 
Since sorting is a simple problem with many different possible solutions, it is often used to introduce the study of algorithms.

Insertion Sort 
These challenges will cover Insertion Sort, a simple and intuitive sorting algorithm. We will first start with a nearly sorted list.
Given a sorted list with an unsorted number  in the rightmost cell, can you write some simple code to insert  into the array so that it remains sorted?

Since this is a learning exercise, it won't be the most efficient way of performing the insertion. 
It will instead demonstrate the brute-force method in detail.

Input Format

There will be two lines of input:

The first line contains the integer n, the size of the array 
The next line contains n space-separated integers 

Output Format
Print the array as a row of space-separated integers each time there is a shift or insertion.

Sample Input

5
2 4 6 8 3
Sample Output

2 4 6 8 8 
2 4 6 6 8 
2 4 4 6 8 
2 3 4 6 8 

*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  ar) {
 int n = ar.size();
    if(n==0)
        return;
    if(n==1)
        cout << ar[0] << endl;
    int current = ar[n-1];
    int i = n-2;
    while( i >=0)
        {
        if(ar[i] >= current)
            ar[i+1] = ar[i];
        else
            {
            ar[i+1] = current; i = -1;
        }
     for( int k =0;k<n; k++)
        cout << ar[k] <<" ";
        cout << endl;
        if(i==0)
            {
            ar[i]= current;
            for(int k=0;k<n;k++)
                cout << ar[k] <<" ";
            cout << endl; 
        
             }
        i--;
    }
}


int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}
