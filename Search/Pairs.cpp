/*

QUESTION:
You will be given an array of integers and a target value.
Determine the number of pairs of array elements that have a difference equal to a target value.

Function prototype:

int solveMeFirst(int x, int y);

where,

x is the first integer input.
y is the second integer input

Return values

sum of the above two integers
Complete the function pairs to compute the number of pairs of values in an array with a difference equal to the target value.

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
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */

int pairs(vector < int > a,int k) {
   int ans =0;
    sort(a.begin(), a.end());
    for(int i=0;i<a.size()-1;i++)
        {
        for(int j = i+1; j< a.size() && (a[j] - a[i] <= k);j++)
            if(a[j] - a[i] == k) ans++;
        }
    return ans;
}

/* Tail starts here */
int main() {
    int res;
    
    int _a_size,_k;
    cin >> _a_size>>_k;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = pairs(_a,_k);
    cout << res;
    
    return 0;
}
