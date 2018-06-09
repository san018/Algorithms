/*

QUESTION:
In a previous challenge you implemented the Insertion Sort algorithm. It is a simple sorting algorithm that works well with small or mostly sorted data. 
However, it takes a long time to sort large unsorted data. To see why, we will analyze its running time.

Running Time of Algorithms 
The running time of an algorithm for a specific input depends on the number of operations executed. 
The greater the number of operations, the longer the running time of an algorithm. We usually want to know how many operations an algorithm will execute in proportion to the size of its input, which we will call .

What is the ratio of the running time of Insertion Sort to the size of the input? 
To answer this question, we need to examine the algorithm.

Analysis of Insertion Sort 
For each element  in an array of  numbers, Insertion Sort compares the number to those to its left until it reaches a lower value element or the start. At that point it shifts everything to the right up one and inserts  into the array.

How long does all that shifting take?

In the best case, where the array was already sorted, no element will need to be moved, 
so the algorithm will just run through the array once and return the sorted array. 
The running time would be directly proportional to the size of the input, so we can say it will take  time.

What this means 
The running time of the algorithm against an array of  N elements is N^2. 
For  elements,2N it will be 4N^2.
Insertion Sort can work well for small inputs or if you know the data is likely to be nearly sorted, like check numbers as they are received by a bank. 
The running time becomes unreasonable for larger inputs.

Challenge 
Can you modify your previous Insertion Sort implementation to keep track of the number of shifts it makes while sorting? 
The only thing you should print is the number of shifts made by the algorithm to completely sort the array. A shift occurs when an element's position changes in the array. Do not shift an element if it is not necessary.

Input Format

The first line contains the integer n , the number of elements to be sorted. The next line contains n integers.

Output Format

Output the number of shifts it takes to sort the array.

Sample Input

5
2 1 3 1 2
Sample Output

4

Explanation

Iteration   Array      Shifts
0           2 1 3 1 2
1           1 2 3 1 2     1
2           1 2 3 1 2     0
3           1 1 2 3 2     2
4           1 1 2 2 3     1

Total                     4
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,value=0,hole=0,count = 0;
    cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
                cin >> a[i];
        for(int i=1;i<n;i++)
        {
              value = a[i];
              hole = i;
              while(hole > 0 && a[hole-1]> value)
              {
                      a[hole] = a[hole-1];
                      count++;
                      hole = hole -1;
              }
                a[hole] = value;
        }
        
        cout << count ;
    return 0;
}



